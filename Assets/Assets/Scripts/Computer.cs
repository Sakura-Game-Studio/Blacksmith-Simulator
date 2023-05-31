using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;
using UnityEngine.UI;

public class Computer : MonoBehaviour {
    public List<GameObject> prefabs;
    public List<Sprite> prefabsImages;
    public Image imageComputer;
    [FormerlySerializedAs("prefab")] public GameObject prefabAtual;
    
    private int _contador = 0;

    private void Start() {
        prefabAtual = prefabs[_contador];
        imageComputer.sprite = prefabsImages[_contador];
    }

    public void ChangePrefabRight() {
        _contador++;
        if (_contador > prefabs.Count - 1) {
            _contador = 0;
        }
        prefabAtual = prefabs[_contador];
        imageComputer.sprite = prefabsImages[_contador];
    }
    
    public void ChangePrefabLeft() {
        _contador--;
        if (_contador < 0) {
            _contador = prefabs.Count-1;
        }
        prefabAtual = prefabs[_contador];
        imageComputer.sprite = prefabsImages[_contador];
    }

    public GameObject GetPrefab() {
        return prefabAtual;
    }
}
