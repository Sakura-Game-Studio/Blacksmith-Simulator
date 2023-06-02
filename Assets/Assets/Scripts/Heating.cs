using System;
using UnityEngine;

public class Heating : MonoBehaviour{

    private bool _heating = false;
    [SerializeField] private bool _heated = false;
    private float _timer = 5f;
    private Renderer _ingot;

    private void Awake(){
        _ingot = GetComponent<Renderer>();
    }

    private void Update(){
        if (_heating){
            _timer -= Time.deltaTime;
        }

        if (_timer <= 2.5f && !_heated){
            _ingot.material.SetColor("_BaseColor", Color.yellow);
        }

        if (_timer <= 0 && _heating && !_heated){
            _heating = false;
            _heated = true;
            _timer = 0;
            _ingot.material.SetColor("_BaseColor", Color.red);
        }
    }

    public void OnFurnace(){
        _heating = true;
    }
    
    public void OffFurnace(){
        _heating = false;
    }

    public bool getHeated(){
        return _heated;
    }
}
