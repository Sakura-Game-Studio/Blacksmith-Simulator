using System.Collections.Generic;
using UnityEngine;

public class Computer : MonoBehaviour {
    public List<GameObject> prefabs;
    public GameObject prefab;
    private int _contador = 0;

    private void Start() {
        prefab = prefabs[_contador];
    }

    public void ChangePrefabRight() {
        _contador++;
        if (_contador > prefabs.Count - 1) {
            _contador = 0;
        }
        prefab = prefabs[_contador];
        Debug.Log(prefab.name);
    }
    
    public void ChangePrefabLeft() {
        _contador--;
        if (_contador < 0) {
            _contador = prefabs.Count-1;
        }
        prefab = prefabs[_contador];
        Debug.Log(prefab.name);
    }

    public GameObject GetPrefab() {
        return prefab;
    }
}
