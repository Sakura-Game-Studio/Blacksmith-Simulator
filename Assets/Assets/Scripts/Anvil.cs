
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Anvil : MonoBehaviour{
    
    private void OnCollisionStay(Collision collisionInfo){
        var objectColision = collisionInfo.gameObject;
        if (objectColision.CompareTag("Ingot")){
            objectColision.GetComponent<Hammering>().OnAnvil();
        }
    }
    
    private void OnCollisionExit(Collision collisionInfo){
        var objectColision = collisionInfo.gameObject;
        if (objectColision.CompareTag("Ingot")){
            objectColision.GetComponent<Hammering>().OffAnvil();
        }
    }
}
