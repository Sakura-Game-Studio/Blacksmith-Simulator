using System;
using UnityEngine;

public class Bucket : MonoBehaviour{
    
    public FMODUnity.EventReference somFerroQuente1;
    private FMOD.Studio.EventInstance somFerroQuente1Instance;
    
    public FMODUnity.EventReference somFerroQuente2;
    private FMOD.Studio.EventInstance somFerroQuente2Instance;

    private void Awake(){
        somFerroQuente1Instance = FMODUnity.RuntimeManager.CreateInstance(somFerroQuente1);
        somFerroQuente1Instance.set3DAttributes(FMODUnity.RuntimeUtils.To3DAttributes(gameObject, GetComponent<Rigidbody>()));
        
        somFerroQuente2Instance = FMODUnity.RuntimeManager.CreateInstance(somFerroQuente2);
        somFerroQuente2Instance.set3DAttributes(FMODUnity.RuntimeUtils.To3DAttributes(gameObject, GetComponent<Rigidbody>()));
    }

    private void OnTriggerEnter(Collider other){
        var objectColision = other.gameObject;
        if (objectColision.CompareTag("Dagger") || objectColision.CompareTag("Axe") || objectColision.CompareTag("Sword")){
            Cooling cooling = objectColision.GetComponent<Cooling>();
            if (!cooling.Get_Chilled()){
                if (cooling.Get_Timer() >= 2.5f){
                    somFerroQuente1Instance.start();
                } else{
                    somFerroQuente2Instance.start();
                }
            }
        }
    }

    private void OnTriggerStay(Collider other){
        var objectColision = other.gameObject;
        if (objectColision.CompareTag("Dagger") || objectColision.CompareTag("Axe") || objectColision.CompareTag("Sword")){
            objectColision.GetComponent<Cooling>().OnBucket();
        }
    }

    private void OnTriggerExit(Collider other){
        var objectColision = other.gameObject;
        if (objectColision.CompareTag("Dagger") || objectColision.CompareTag("Axe") || objectColision.CompareTag("Sword")){
            objectColision.GetComponent<Cooling>().OffBucket();
        }
    }
}
