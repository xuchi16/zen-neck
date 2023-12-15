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
    private float currentTime;

    // Start is called before the first frame update
    void Start()
    {
        currentTime = countdownDuration;
        UpdateUI();
        StartCoroutine(StartCountdown());

    }

    IEnumerator StartCountdown()
    {
        while (currentTime > 0)
        {
            yield return new WaitForSeconds(1.0f);
            currentTime--;
            UpdateUI();
        }

        // 倒计时结束后执行你的操作
        if (countdownText != null)
        {
            countdownText.gameObject.SetActive(false);
        }

        stageManager.NextStage();

    }

    void UpdateUI()
    {
        if (countdownText != null)
        {
            StringBuilder msgBuilder = new StringBuilder();
            msgBuilder.Append(HINT_MSG);
            msgBuilder.Append("\n");
            msgBuilder.Append(currentTime.ToString());
            countdownText.text = msgBuilder.ToString();
        }
    }

    // 获取当前剩余时间
    public float GetCurrentTime()
    {
        return currentTime;
    }
}
