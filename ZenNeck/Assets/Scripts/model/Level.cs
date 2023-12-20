using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

[System.Serializable]
public abstract class Level
{
    public string levelName; // 关卡名称
    public int duration; // 每一关开始前的倒计时时间
    public List<Transform> movingObjects; // 关卡中需要运动的物体
    public Transform cameraTransform; // Camera位置信息
    public string startMessage; // 开始时的消息
    public string endingMessage; // 结束时的消息

    public LevelManager levelManager;
    public Countdown countdownManager;
    public TimeManager timeManager;

    public bool start = false;
    public bool moving = false;
    public bool completed = false;

    public bool convertToRelative = true;

    protected int round = 2; // 来回的轮数
    //protected float angularSpeed = 15.0f; // 角速度（度/秒）
    protected float angularSpeed = 90.0f; // 角速度（度/秒）- 测试加速
    protected float sphereRadius = 2.0f; // 球面半径

    public float angleLowerBound = 20;
    public float angleUpperBound = 160;

    // 构造函数
    public Level(LevelManager levelManager, Countdown countdownManager, TimeManager timeManager) {
        movingObjects = new List<Transform>();
        this.levelManager = levelManager;
        this.countdownManager = countdownManager;
        this.timeManager = timeManager;
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

    public void Start()
    {
        Debug.Log($"Start: {levelName}");
        start = true;
        if (countdownManager != null)
        {
            countdownManager.StartNextRoundCountdown(this);
        }
    }

    public void Complete()
    {
        this.moving = false;
        this.completed = true;
        if (levelManager != null)
        {
            levelManager.NextLevel(this);
        }
    }

    public void StartMove()
    {
        this.moving = true;
    }

    public void EndMove()
    {
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

    public Vector3 Normalize(Vector3 origin)
    {
        if (origin == null)
        {
            return origin;
        }
        float distance = origin.magnitude;
        float factor = sphereRadius / distance;
        return origin * factor;
    }

    public virtual string GetMessage()
    {
        return startMessage == null || startMessage.Length == 0 ?
            levelName : $"{levelName}. {startMessage}";
    }

    // 抽象的 Move 方法，子类需要实现自己的移动逻辑
    public abstract void SpecificMove();

    protected Vector3 ToRelativeTransform(Vector3 absolute)
    {
        if (!convertToRelative || absolute == null)
        {
            return absolute;
        }
        return cameraTransform.position + absolute;
    }

    public override string ToString()
    {
        return $"Level: {levelName}, Start: {start}, Moving: {moving}, Completed: {completed}";
    }
}

public class Level0 : Level
{
    private float angle; // 初始方位角（经度）
    public float accAngle; // 累计方位角
    private float minScale = 1.0f; // 最小缩放值
    private float maxScale = 1.2f; // 最大缩放值
    private float scaleSpeed = 0.7f; // 缩放速度
    private int totalScaleRounds = 28; // 总共的缩放轮数

    public Level0(LevelManager levelManager, Countdown countdownManager, TimeManager timeManager) : base(levelManager, countdownManager, timeManager)
    {
        levelName = "Breath";
        duration = 3;
        startMessage = "Please inhale while shrinking and exhale while expanding";
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

            float delta = Time.time - duration;

            // 计算当前缩放轮数
            int currentScaleRound = Mathf.FloorToInt(delta * scaleSpeed);

            //如果达到总共的缩放轮数，停止缩放
            if (currentScaleRound > totalScaleRounds)
            {
                Complete(); // 停止移动
                return;
            }

            // 计算大小变化的比例
            float scaleChange = minScale + Mathf.Sin(delta * scaleSpeed) * 0.2f; // 在 minScale 到 maxScale 之间变化
            Debug.Log($"currentScaleRound: {currentScaleRound}, scale: {scaleChange}");

            // 设置物体的局部缩放
            Vector3 newScale = Vector3.one * scaleChange;
            transform.localScale = newScale;

        }
    }

}

public class Level1 : Level
{
    private float angle; // 初始方位角（经度）
    public float accAngle; // 累计方位角

    public Level1(LevelManager levelManager, Countdown countdownManager, TimeManager timeManager) : base(levelManager, countdownManager, timeManager)
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
                Complete();
            }


            float longitude;
            longitude = angle * Mathf.Deg2Rad; // 将角速度转换为弧度


            // 限制方位角的范围
            if (longitude > 2 * Mathf.PI)
            {
                longitude -= 2 * Mathf.PI;
            }

            // 计算目标对象在球面上的新位置
            Vector3 targetPosition = ToRelativeTransform(CalculatePosition(longitude));

            // 设置目标对象的位置
            transform.position = targetPosition;
            return;
        }
    }

    Vector3 CalculatePosition(float lon)
    {
        float x = sphereRadius * Mathf.Cos(lon);
        float y = 0.0f; // 因为我们希望在球面上水平移动
        float z = sphereRadius * Mathf.Sin(lon);
        return new Vector3(x, y, z);
    }
}

public class Level2 : Level
{
    private float angle; // 初始方位角（经度）
    public float accAngle; // 累计方位角

    public Level2(LevelManager levelManager, Countdown countdownManager, TimeManager timeManager) : base(levelManager, countdownManager, timeManager)
    {
        levelName = "Level 2";
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
                Complete();
            }


            float longitude;
            longitude = angle * Mathf.Deg2Rad; // 将角速度转换为弧度


            // 限制方位角的范围
            if (longitude > 2 * Mathf.PI)
            {
                longitude -= 2 * Mathf.PI;
            }

            // 计算目标对象在球面上的新位置
            Vector3 targetPosition = ToRelativeTransform(CalculatePosition(longitude));

            // 设置目标对象的位置
            transform.position = targetPosition;
            return;
        }
    }

    Vector3 CalculatePosition(float lon)
    {
        float y = -sphereRadius * Mathf.Cos(lon);
        float x = 0.0f; // 因为我们希望在球面上水平移动
        float z = sphereRadius * Mathf.Sin(lon);
        return new Vector3(x, y, z);
    }
}


public class Level3 : Level
{
    private float xRadius = 3.4f; // 8 字形轨迹的 x 轴半径
    private float yRadius = 0.8f; // 8 字形轨迹的 y 轴半径
    private float zPosition = 2.0f;
    private float angle; // 初始方位角（经度）
    private float accAngle;

    public Level3(LevelManager levelManager, Countdown countdownManager, TimeManager timeManager) : base(levelManager, countdownManager, timeManager)
    {
        levelName = "Level 3";
        duration = 5;
        startMessage = "Follow the figure-eight path";
        endingMessage = "";
        angle = 0.0f;
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

            // 计算角度的增量，确保匀速旋转
            float deltaAngle = angularSpeed * Time.deltaTime;

            // 更新方位角
            angle += deltaAngle;

            accAngle += Mathf.Abs(deltaAngle);
            if (accAngle > 360 * round)
            {
                Complete();
            }

            // 计算目标对象在 8 字形轨迹上的新位置
            Vector3 targetPosition = ToRelativeTransform(Normalize(CalculateFigureEightPosition(angle)));

            // 设置目标对象的位置
            transform.position = targetPosition;
        }
    }

    Vector3 CalculateFigureEightPosition(float angle)
    {
        // 计算 x 和 y 坐标，忽略 z 坐标
        float x = xRadius * Mathf.Sin(angle * Mathf.Deg2Rad);
        float y = yRadius * Mathf.Sin(2 * angle * Mathf.Deg2Rad);
        float z = zPosition; // 在 x 和 y 平面上移动

        return new Vector3(x, y, z);
    }
}

public class SummaryLevel : Level
{

    public SummaryLevel(LevelManager levelManager, Countdown countdownManager, TimeManager timeManager) : base(levelManager, countdownManager, timeManager)
    {
        levelName = "Well done";
        duration = 10;
        startMessage = "All tasks completed! Will Return to Menu Soon.";
        endingMessage = "";
    }

    public override void SpecificMove()
    {
        this.levelManager.ReturnToMenu();
    }

    public override string GetMessage()
    {
        float percentage = 0;
        if (timeManager != null)
        {
            percentage = timeManager.HitPercentage();
        }

        // 记录信息
        string dateTime = DateTime.Now.ToString("yyyy-MM-dd HH:mm:ss");
        MainManager.Instance.AddAndSaveRecord(dateTime, percentage);


        string msg = $"Well done! You've completed all tasks. \nReturning to the menu shortly.";
        if (percentage > 0)
        {
            msg = $"Well done! You maintained focus for {percentage.ToString("F1")}% of the process. \nReturning to the menu shortly.";
        }


        return msg;
    }

}