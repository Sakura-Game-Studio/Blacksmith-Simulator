using System;
using HurricaneVR.Framework.Core.Utils;
using UnityEngine;

public class SpawnObjectsFromComputer : MonoBehaviour {
    public Computer computer;
    public Transform positionSpawn;
    private GameObject prefab;
    
    public FMODUnity.EventReference  buyButton;
    private FMOD.Studio.EventInstance buyButtonInstance;

    public HVRObjectCollisionDisablerParent disabler;

    private void Start(){
        buyButtonInstance = FMODUnity.RuntimeManager.CreateInstance(buyButton);
        buyButtonInstance.set3DAttributes(FMODUnity.RuntimeUtils.To3DAttributes(gameObject, GetComponent<Rigidbody>()));
    }

    public void SpawnObjectFromComputer() {
        prefab = computer.GetPrefab();
        Vector3 posicao = positionSpawn.position;
        buyButtonInstance.start();
        
        GameObject novoObjeto = Instantiate(prefab, posicao, Quaternion.identity);
        //disabler.Transforms.Add(novoObjeto.transform);
    }
}
