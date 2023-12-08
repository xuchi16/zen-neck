using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class TimeManager : MonoBehaviour
{
    public TextMeshProUGUI totalTimeText;
    public TextMeshProUGUI hitTimeText;

    private float totalTime = 0f;
    private float hitTime = 0f;
    private bool hit;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        totalTime += Time.deltaTime;
        if (hit)
        {
            hitTime += Time.deltaTime;
        }
        updateTextBoard();
    }

    public void Hit()
    {
        hit = true;
    }

    public void Lost()
    {
        hit = false;
    }

    private void updateTextBoard()
    {
        totalTimeText.text = $"Total Time: {nomralizeTime(totalTime)}s";
        hitTimeText.text = $"Hit Time: {nomralizeTime(hitTime)}s";
    }

    private string nomralizeTime(float seconds)
    {
        return seconds.ToString("F1");
    }
}
