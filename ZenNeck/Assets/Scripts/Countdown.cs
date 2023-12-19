using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System.Text;

public class Countdown : MonoBehaviour
{
    public ZenStageManager stageManager; // 用于控制阶段
    public TextMeshProUGUI countdownText; // 用于显示倒计时的UI文本

    private string HINT_MSG = "Please focus on the ZenBall";
    private float countdownDuration = 3.0f; // 倒计时持续时间（秒）
    private float remainingTime;
    private int currentRound = 0;

    public delegate void StartCountDownDelegate();
    public event StartCountDownDelegate OnStartCountdown;

    // Start is called before the first frame update
    void Start()
    {
        OnStartCountdown += StartNextRoundCountdown;
        StartNextRoundCountdown();
    }

    public void StartNextRoundCountdown()
    {
        currentRound++;
        StartCoroutine(StartCountdown());
    }

    IEnumerator StartCountdown()
    {
        Debug.Log("Round: " + currentRound);
        remainingTime = countdownDuration;
        while (remainingTime > 0)
        {
            yield return new WaitForSeconds(1.0f);
            remainingTime--;
            UpdateUI();
        }

        // 倒计时结束后执行你的操作
        if (countdownText != null)
        {
            //countdownText.gameObject.SetActive(false);
            ClearMsgBoard();
        }

        stageManager.NextStage();

    }

    public void TriggerStartCountDownEvent()
    {
        if (OnStartCountdown != null)
        {
            OnStartCountdown();
        }
    }

    void UpdateUI()
    {
        if (countdownText != null)
        {
            StringBuilder msgBuilder = new StringBuilder();
            msgBuilder.Append(HINT_MSG);
            msgBuilder.Append("\n");
            msgBuilder.Append(remainingTime.ToString());
            countdownText.text = msgBuilder.ToString();
        }
    }

    private void ClearMsgBoard()
    {
        if (countdownText != null)
        {
            countdownText.text = "";
        }
    }

    // 获取当前剩余时间
    public float GetremainingTime()
    {
        return remainingTime;
    }
}
