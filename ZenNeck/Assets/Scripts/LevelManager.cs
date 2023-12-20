using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LevelManager : MonoBehaviour
{
    // References
    public Countdown countdownManager;
    public ZenStageManager stageManager;
    public GameObject zenBall;

    public List<Level> levels = new List<Level>();
    private Level currentLevel;

    public bool allCompleted = false;

    // Start is called before the first frame update
    void Start()
    {
        // 初始化关卡
        setUpLevels();

        // 开始关卡
        currentLevel = levels[0];
        currentLevel.Start();
    }

    public void setUpLevels()
    {
        Level level1 = new Level1(this, countdownManager);
        level1.AddMovingObject(zenBall.transform);
        levels.Add(level1);

        //Level level2 = new Level2(this, countdownManager);
        //level2.AddMovingObject(zenBall.transform);
        //levels.Add(level2);

        //Level level3 = new Level3(this, countdownManager);
        //level3.AddMovingObject(zenBall.transform);
        //levels.Add(level3);

        Level summaryLevel = new SummaryLevel(this, countdownManager);
        levels.Add(summaryLevel);
    }

    void Update()
    {
        foreach (Level level in levels)
        {
            if (level.moving)
            {
                level.Move();
            }
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

    public void NextLevel(Level completedLevel)
    {
        bool flag = false;
        Level nextLevel = null;
        foreach (Level level in levels)
        {
            if (level == completedLevel)
            {
                flag = true;
                continue;
            }
            if (flag)
            {
                nextLevel = level;
                break;
            }
        }
        if (nextLevel != null)
        {
            nextLevel.Start();
        }
        else
        {
            allCompleted = true;
        }
    }

    public bool IsCurrentMoving()
    {
        if (currentLevel != null)
        {
            return currentLevel.moving;
        }
        return false;
    }

    public void ReturnToMenu()
    {
        SceneManager.LoadScene("MenuScene");
    }

}
