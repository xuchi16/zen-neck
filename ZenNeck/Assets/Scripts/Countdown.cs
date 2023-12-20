using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System.Text;

public class Countdown : MonoBehaviour
{
    public ZenStageManager stageManager; // 用于控制阶段
    public TextMeshProUGUI countdownText; // 用于显示倒计时的UI文本

    private float defaultCountdownDuration = 3.0f; // 倒计时持续时间（秒）
    private float remainingTime;
    private int currentRound = 0;


    // Start is called before the first frame update
    void Start()
    {
    }

    public void StartNextRoundCountdown(Level level)
    {
        currentRound++;
        StartCoroutine(StartCountdown(level));
    }

    IEnumerator StartCountdown(Level level)
    {
        int duration = level.duration;
        string message =
            level.startMessage == null || level.startMessage.Length == 0 ?
            level.levelName : $"{level.levelName}. {level.startMessage}";

        remainingTime = duration > 0 ? duration : defaultCountdownDuration;
        Debug.Log($"Round: {currentRound}, duration: {remainingTime}, msg: {message}");

        while (remainingTime > 0)
        {
            yield return new WaitForSeconds(1.0f);
            remainingTime--;
            UpdateUI(message);
        }

        // 倒计时结束后执行你的操作
        if (countdownText != null)
        {
            //countdownText.gameObject.SetActive(false);
            ClearMsgBoard();
        }

        level.StartMove();

    }

    void UpdateUI(string message)
    {
        if (countdownText != null)
        {
            StringBuilder msgBuilder = new StringBuilder();
            msgBuilder.Append(message);
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
