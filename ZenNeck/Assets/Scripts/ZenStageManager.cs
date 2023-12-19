using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ZenStageManager : MonoBehaviour
{
    enum Stage
    {
        Hint,
        Countdown,
        Breath,
        Move,
        Finish,
    }

    private Stage currentStage;

    // Start is called before the first frame update
    void Start()
    {
        currentStage = Stage.Countdown;
    }

    public string CurrentStageName()
    {
        return currentStage.ToString();
    }

    public bool isMoveStage()
    {
        return currentStage == Stage.Move;
    }

    public void NextStage()
    {
        switch (currentStage)
        {
            case Stage.Hint:
                currentStage = Stage.Countdown;
                break;
            case Stage.Countdown:
                currentStage = Stage.Move;
                break;
            case Stage.Move:
                currentStage = Stage.Finish;
                break;
            case Stage.Finish:
                currentStage = Stage.Finish;
                break;
            default:
                Debug.Log("Unexpected!");
                break;
        }
    }

}
