using UnityEngine;

public class Furnace : MonoBehaviour{
    private void OnCollisionStay(Collision collisionInfo){
        var objectColision = collisionInfo.gameObject;
        if (objectColision.CompareTag("Ingot")){
            objectColision.GetComponentInChildren<Heating>().OnFurnace();
            //Debug.Log("Na fornalha");
        }
    }
    
    
    private void OnCollisionExit(Collision collisionInfo){
        var objectColision = collisionInfo.gameObject;
        if (objectColision.CompareTag("Ingot")){
            objectColision.GetComponentInChildren<Heating>().OffFurnace();
            //Debug.Log("Saiu da fornalha");
        }
    }
}
