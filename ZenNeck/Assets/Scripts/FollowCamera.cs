using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FollowCamera : MonoBehaviour
{
    public Transform cameraRig;
    private float distance = 3f;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        // 获取摄像机的位置
        Vector3 cameraPosition = cameraRig.position + cameraRig.forward * distance;

        // 更新环的位置
        transform.position = cameraPosition;
        transform.rotation = cameraRig.rotation; // 保持环的旋转与摄像机一致
    }
}
