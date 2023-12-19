using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class Mover : MonoBehaviour
{
    public ZenStageManager stageManager;
    public Countdown countdownManager;

    private float radius = 2.0f; // 球面半径
    private float angularSpeed = 90.0f; // 角速度（度/秒）

    private float angle; // 初始方位角（经度）
    public float accAngle; // 累计方位角
    public bool level1Ends;

    private int round = 1; // 来回的轮数

    // Start is called before the first frame update
    void Start()
    {
        InitStage();
    }

    public void InitStage()
    {
        angle = 90.0f;
        accAngle = 0.0f;
        level1Ends = false;
    }

    // Update is called once per frame
    void Update()
    {
        if (!stageManager.isMoveStage()) {
            return;
        }

        if (!level1Ends) {
            level1Ends = Level1(level1Ends);
        }

    }


    // ========================= Move stage=========================
    private bool Level1(bool ends)
    {
        // 计算角度的增量，确保匀速旋转
        float deltaAngle = angularSpeed * Time.deltaTime;


        // 更新方位角
        angle += deltaAngle;
        accAngle += Mathf.Abs(deltaAngle);

        if (angle >= 180 || angle <= 0)
        {
            angularSpeed = -angularSpeed;
        }

        if (accAngle > 360 * round)
        {
            ends = true;
            stageManager.NextStage();
            countdownManager.StartNextRoundCountdown();
        }


        float longitude;
        longitude = angle * Mathf.Deg2Rad; // 将角速度转换为弧度


        // 限制方位角的范围
        if (longitude > 2 * Mathf.PI)
        {
            longitude -= 2 * Mathf.PI;
        }

        // 计算目标对象在球面上的新位置
        Vector3 targetPosition = CalculatePosition(longitude);

        // 设置目标对象的位置
        transform.position = targetPosition;
        return ends;
    }

    private void Move2()
    {

    }

    Vector3 CalculatePosition(float lon)
    {
        float x = radius * Mathf.Cos(lon);
        float y = 0.0f; // 因为我们希望在球面上水平移动
        float z = radius * Mathf.Sin(lon);
        return new Vector3(x, y, z);
    }
}
