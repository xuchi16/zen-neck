using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

// 移动阶段文案提示
public class MsgManager : MonoBehaviour
{
    public TextMeshProUGUI msgText; // 用于显示倒计时的UI文本
    public ZenStageManager stageManager;
    public TimeManager timeManager;

    private string msg = "";

    private readonly string lostMsg = "Please follow the ZenBall";
    private readonly string defaultMsg = "";

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (stageManager == null || !stageManager.isMoveStage())
        {
            return;
        }

        if (timeManager == null)
        {
            return;
        }

        msgText.text = defaultMsg;
        if (timeManager.isLost())
        {
            msgText.text = lostMsg;
        }
        
    }

    public void SetMsg(string msg)
    {
        this.msg = msg;
    }
}
