using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class Countdown : MonoBehaviour
{
    public ZenStageManager stageManager; // 用于控制阶段
    public TextMeshProUGUI countdownText; // 用于显示倒计时的UI文本

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
        Debug.Log("Countdown ends!");

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
            countdownText.text = currentTime.ToString();
        }
    }

    // 获取当前剩余时间
    public float GetCurrentTime()
    {
        return currentTime;
    }
}
