using System;
using UnityEngine;

public class Bucket : MonoBehaviour{
    private void OnCollisionStay(Collision collisionInfo){
        var objectColision = collisionInfo.gameObject;
        if (objectColision.CompareTag("Dagger")){
            objectColision.GetComponent<Cooling>().OnBucket();
            Debug.Log("No Balde");
        }
    }

    private void OnCollisionExit(Collision other){
        var objectColision = other.gameObject;
        if (objectColision.CompareTag("Dagger")){
            objectColision.GetComponent<Cooling>().OffBucket();
            Debug.Log("Saiu do Balde");
        }
    }
}
