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

    public Anvil anvil;

    private void Awake(){
        _ingot = GetComponent<Renderer>();
        _heating = GetComponent<Heating>();
        anvil = FindObjectOfType<Anvil>();
    }

    private void Update(){
        if (_hits == 0 && !_changed){
            _changed = true;
            _hits = 0;
            _ingot.material.SetColor("_BaseColor", Color.green);
        }
    }

    private void OnCollisionEnter(Collision collision){
        var objectColision = collision.gameObject;
        if (objectColision.CompareTag("Hammer")){
            anvil.CraftRecipe();
        }
    }

    public void OnAnvil(){
        _onAnvil = true;
        Debug.Log("Na fornalha");
    }
    
    public void OffAnvil(){
        _onAnvil = false;
    }

    public bool getChanged(){
        return _changed;
    }
}
