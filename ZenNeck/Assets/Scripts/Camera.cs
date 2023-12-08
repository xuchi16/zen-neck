using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Rokid.UXR.Module;
using Rokid.UXR.Native;
using Rokid.UXR.Utility;
using UnityEngine.SpatialTracking;

public class Camera : MonoBehaviour
{
    public RKCameraRig rkCamera;
    private TrackedPoseDriver m_TrackedPoseDriver;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        m_TrackedPoseDriver = gameObject.GetComponent<TrackedPoseDriver>();
    }
}
