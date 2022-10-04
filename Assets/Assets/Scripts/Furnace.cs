using UnityEngine;

public class Furnace : MonoBehaviour{
    private void OnCollisionStay(Collision collisionInfo){
        var objectColision = collisionInfo.gameObject;
        if (objectColision.CompareTag("Ingot")){
            objectColision.GetComponent<Heating>().OnFurnace();
        }
    }
    
    private void OnCollisionExit(Collision collisionInfo){
        var objectColision = collisionInfo.gameObject;
        if (objectColision.CompareTag("Ingot")){
            objectColision.GetComponent<Heating>().OffFurnace();
        }
    }
}
