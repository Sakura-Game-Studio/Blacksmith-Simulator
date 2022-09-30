using System;
using System.Collections;
using System.Collections.Generic;
using HurricaneVR.Framework.Core;
using UnityEngine;

public class SnapObjects : MonoBehaviour{
    public float snapDistance = 0.05f;
    public List<Transform> furnacePlaces = new List<Transform>();
    public HVRGrabbable grabbable;

    private void Awake(){
        grabbable = GetComponent<HVRGrabbable>();
    }

    public void Update(){
        /*float smallestDistance = snapDistance;
        foreach (Transform place in furnacePlaces) {
            if (Vector3.Distance(place.position, transform.position) < smallestDistance && !grabbable.IsBeingHeld){
                transform.position = place.position;
                smallestDistance = Vector3.Distance(place.position, transform.position);
            }
        }*/
    }

    private void OnTriggerStay(Collider other){
        if (other.gameObject.CompareTag("FornalhaPosition")){
            if (!grabbable.IsBeingHeld){
                    transform.position = other.gameObject.GetComponentInChildren<Transform>().position;
                    transform.rotation = other.gameObject.GetComponentInChildren<Transform>().rotation;
            }
        }
    }
}
