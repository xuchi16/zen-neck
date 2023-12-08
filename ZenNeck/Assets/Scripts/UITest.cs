using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class UITest : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    // 当手指捏合的时候将图片变成蓝色
    public void OnPointerDown(PointerEventData eventData)
    {
        //按下
        GetComponent<Image>().color = Color.red;
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        //抬起
        GetComponent<Image>().color = Color.white;
    }
}
