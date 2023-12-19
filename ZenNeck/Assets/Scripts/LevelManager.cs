using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelManager : MonoBehaviour
{
    // References
    public Countdown countdownManager;
    public ZenStageManager stageManager;
    public GameObject zenBall;

    private List<Level> levels = new List<Level>();
    private int currentLevelIndex = 0;

    // Start is called before the first frame update
    void Start()
    {
        // 初始化关卡
        setUpLevels();

        // 在这里启动第一关
        StartLevel(currentLevelIndex);
    }

    public void setUpLevels()
    {
        Level level1 = new Level1();
        level1.AddMovingObject(zenBall.transform);
        levels.Add(level1);
    }

    void Update()
    {
        foreach (Level level in levels)
        {
            level.Move();
        }
        
    }

    public void StartLevel(int levelIndex)
    {
        if (levelIndex >= 0 && levelIndex < levels.Count)
        {
            Level level = levels[levelIndex];
            Debug.Log("Starting Level: " + level.levelName);

            countdownManager.StartNextRoundCountdown(level);
            // 在这里可以设置倒计时、移动物体等关卡开始前的操作

        }
        else
        {
            Debug.LogWarning("Invalid level index: " + levelIndex);
        }
    }

    //private void Move(Transform transform)
    //{
    //    // 检查是否有 transform 引用
    //    if (transform != null)
    //    {
    //        // 在这里实现 transform 的移动逻辑，例如平移
    //        transform.Translate(Vector3.forward * Time.deltaTime);
    //    }
    //}
}
