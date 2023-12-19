using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public abstract class Level
{
    public string levelName; // 关卡名称
    public int duration; // 每一关开始前的倒计时时间
    public List<Transform> movingObjects; // 关卡中需要运动的物体
    public string startMessage; // 开始时的消息
    public string endingMessage; // 结束时的消息
    public bool moving;

    // 构造函数
    public Level() {
        movingObjects = new List<Transform>();
    }

    public void AddMovingObject(Transform transform)
    {
        movingObjects.Add(transform);
    }

    public Level(string name, int duration, List<Transform> objects,
         string startMessage, string endMessage)
    {
        this.levelName = name;
        this.duration = duration;
        this.movingObjects = objects;
        this.startMessage = startMessage;
        this.endingMessage = endMessage;
        this.moving = false;
    }

    public void Move()
    {
        if (!moving)
        {
            return;
        }
        SpecificMove();
    }

    // 抽象的 Move 方法，子类需要实现自己的移动逻辑
    public abstract void SpecificMove();
}

public class Level1 : Level
{
    private float radius = 2.0f; // 球面半径
    private float angularSpeed = 90.0f; // 角速度（度/秒）
    private float angle; // 初始方位角（经度）
    public float accAngle; // 累计方位角
    private int round = 1; // 来回的轮数

    public Level1() : base()
    {
        levelName = "Level 1";
        duration = 3;
        startMessage = "Please focus on the ZenBall";
        endingMessage = "";

        angle = 90.0f;
        accAngle = 0.0f;
    }

    public override void SpecificMove()
    {
        foreach (Transform transform in movingObjects)
        {
            // 检查是否有 transform 引用
            if (transform == null)
            {
                return;
            }

            // 在这里实现 transform 的移动逻辑，例如平移
            //transform.Translate(Vector3.forward * Time.deltaTime);

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
                moving = false;
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
            return;
        }
    }

    Vector3 CalculatePosition(float lon)
    {
        float x = radius * Mathf.Cos(lon);
        float y = 0.0f; // 因为我们希望在球面上水平移动
        float z = radius * Mathf.Sin(lon);
        return new Vector3(x, y, z);
    }
}