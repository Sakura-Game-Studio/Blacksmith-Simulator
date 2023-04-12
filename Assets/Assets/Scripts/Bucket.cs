using System;
using UnityEngine;

public class Bucket : MonoBehaviour{
    private void OnTriggerStay(Collider other){
        var objectColision = other.gameObject;
        if (objectColision.CompareTag("Dagger") || objectColision.CompareTag("Axe") || objectColision.CompareTag("Sword")){
            objectColision.GetComponent<Cooling>().OnBucket();
            Debug.Log("No Balde");
        }
    }

    private void OnTriggerExit(Collider other){
        var objectColision = other.gameObject;
        if (objectColision.CompareTag("Dagger") || objectColision.CompareTag("Axe") || objectColision.CompareTag("Sword")){
            objectColision.GetComponent<Cooling>().OffBucket();
            Debug.Log("Saiu do Balde");
        }
    }
}
