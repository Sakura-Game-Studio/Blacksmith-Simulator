using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Check : MonoBehaviour{
    private void OnCollisionStay(Collision collisionInfo){
        var objectColision = collisionInfo.gameObject;
        if (objectColision.CompareTag("Ingot")){
            if (objectColision.GetComponent<Hammering>().getChanged()){
                Destroy(objectColision);
            }
        }
    }
}
