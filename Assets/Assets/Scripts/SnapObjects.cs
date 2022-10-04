using HurricaneVR.Framework.Core;
using UnityEngine;

public class SnapObjects : MonoBehaviour{
    public HVRGrabbable grabbable;

    private void Awake(){
        grabbable = GetComponent<HVRGrabbable>();
    }

    private void OnTriggerStay(Collider other){
        if (other.gameObject.CompareTag("FornalhaPosition")){
            if (!grabbable.IsBeingHeld){
                Vector3 ingotP = other.gameObject.transform.position;
                Quaternion ingotR = other.gameObject.transform.rotation;
                transform.position = ingotP;
                transform.rotation = Quaternion.Lerp(transform.rotation, ingotR, Time.deltaTime);
            }
        }
    }
}
