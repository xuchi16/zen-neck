using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Rokid.UXR.Interaction;

public class SphereTest : MonoBehaviour
{
    private MeshRenderer meshRenderer;
    private InteractableUnityEventWrapper unityEvent;

    // Start is called before the first frame update
    void Start()
    {
        meshRenderer = GetComponent<MeshRenderer>();
        unityEvent = GetComponent<InteractableUnityEventWrapper>();

        unityEvent.WhenSelect.AddListener(() =>
        {
            //Pointer Down
            meshRenderer.material.SetColor("_Color", Color.red);
        });

        unityEvent.WhenUnselect.AddListener(() =>
        {
            //Pointer Up
            meshRenderer.material.SetColor("_Color", Color.white);
        });
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
