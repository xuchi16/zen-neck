using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RaycastController : MonoBehaviour
{

    public TimeManager timeManager;

    public Transform cameraRig; // CameraRig的位置信息
    public float rayLength = 10.0f; // 射线的长度
    public Color rayColor = Color.blue;  // 射线的颜色
    public Color hitColor = Color.green; // 被射中物体的颜色

    private GameObject previousHit; // 上次命中的物体
    private Color prevColor; // 原始颜色
    private Renderer prevRenderer; // 物体的渲染器


    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        if (cameraRig == null)
        {
            Debug.LogError("Camera rig not assigned.");
            return;
        }
        // 获取CameraRig的位置和方向
        Vector3 crPosition = cameraRig.position;
        Vector3 crDirection = cameraRig.forward;

        // 创建射线
        Ray ray = new Ray(crPosition, crDirection);
        Debug.DrawRay(ray.origin, ray.direction * rayLength, rayColor);

        RaycastHit hit;

        bool hitResult = Physics.Raycast(ray, out hit, rayLength);
        if (!hitResult) {
            timeManager.Lost();

            if (prevRenderer != null)
            {
                setColor(prevRenderer, prevColor);
                prevRenderer = null;
            }
        }
        else 
        {
            timeManager.Hit();

            // 检查是否命中了物体
            Renderer hitRenderer = hit.collider.GetComponent<Renderer>();

            // 如果未命中或者当前命中的物体不是此前命中的物体，将原先的物体恢复原色
            if (hitRenderer == null ||
                (hitRenderer != prevRenderer && prevRenderer != null))
            {
                Debug.Log("Hit renderer= " + hitRenderer.ToString());
                setColor(prevRenderer, prevColor);
            }

            // 如果命中了新物体，保存新物体的颜色用于后续恢复，并改变新物体的颜色
            if (hitRenderer != prevRenderer)
            {
                // 保存当前命中物体的颜色
                prevColor = hitRenderer.material.color;
                prevRenderer = hitRenderer;

                // 修改被命中物体的颜色
                hitRenderer.material.color = hitColor;
            }
        }
    }

    private void setColor(Renderer renderer, Color color)
    {
        if (renderer == null || renderer.material == null)
        {
            return;
        }
        renderer.material.color = color;
    }
}
