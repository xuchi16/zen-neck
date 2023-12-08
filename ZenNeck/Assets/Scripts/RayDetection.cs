using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RayDetection : MonoBehaviour
{
    private Color originalColor; // 原始颜色
    private Renderer objectRenderer; // 原始渲染器

    public Color hitColor = Color.green;

    // Start is called before the first frame update
    void Start()
    {
        objectRenderer = GetComponent<Renderer>();
        originalColor = objectRenderer.material.color;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void HandleRaycastHit()
    {
        Debug.Log("Detected hit!");
        // 射线命中了物体，修改颜色为hitColor
        objectRenderer.material.color = hitColor;
    }


    public void HandleRaycastMiss()
    {
        Debug.Log("Detected miss!");
        // 射线离开了物体，恢复原始颜色
        objectRenderer.material.color = originalColor;
    }

}
