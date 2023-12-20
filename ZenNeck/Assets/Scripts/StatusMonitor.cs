using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System.Text;

public class StatusMonitor : MonoBehaviour
{
    public TimeManager timeManager;
    public ZenStageManager stageManager;
    public TextMeshProUGUI statusBoard;
    public LevelManager levelManager;
    public Mover mover;

    private const string TITLE = "STATUS";
    private const string SEPARATOR = "-------------------------";

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        StringBuilder sb = new StringBuilder();

        // Title
        AddMsg(sb, TITLE);

        // Hit data
        AddMsg(sb, $"Hit: {timeManager.isHit()}");
        Separate(sb);

        // Stage data
        AddMsg(sb, stageManager.CurrentStageName());
        Separate(sb);

        // Mover data
        AddMsg(sb, mover.accAngle.ToString());
        AddMsg(sb, mover.level1Ends.ToString());
        Separate(sb);

        // Level data
        foreach (Level level in levelManager.levels)
        {
            AddMsg(sb, level.ToString());
        }
        AddMsg(sb, levelManager.allCompleted.ToString());
        Separate(sb);

        statusBoard.text = sb.ToString();
    }

    private void Separate(StringBuilder sb)
    {
        AddMsg(sb, SEPARATOR);
    }

    private void AddMsg(StringBuilder sb, string msg)
    {
        sb.Append(msg + "\n");
    }

}
