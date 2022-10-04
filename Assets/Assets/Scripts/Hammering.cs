using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Hammering : MonoBehaviour{

    private bool _onAnvil = false;
    private bool _changed = false;
    private int _hits = 2;
    private Renderer _ingot;
    private Heating _heating;

    private void Awake(){
        _ingot = GetComponent<Renderer>();
        _heating = GetComponent<Heating>();
    }

    private void Update(){
        if (_hits == 0 && !_changed){
            _changed = true;
            _hits = 0;
            _ingot.material.SetColor("_Color", Color.green);
        }
    }

    private void OnCollisionEnter(Collision collision){
        var objectColision = collision.gameObject;
        if (objectColision.CompareTag("Hammer")){
            if (_hits > 0 && _onAnvil && _heating.getHeated()){
                _hits--;
            }
        }
    }

    public void OnAnvil(){
        _onAnvil = true;
    }
    
    public void OffAnvil(){
        _onAnvil = false;
    }

    public bool getChanged(){
        return _changed;
    }
}
