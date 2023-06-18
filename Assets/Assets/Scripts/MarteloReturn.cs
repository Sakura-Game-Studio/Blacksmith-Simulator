using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MarteloReturn : MonoBehaviour{
    public GameObject martelo;
    private Vector3 pontoOriginalMartelo;
    private float _timer = 5f;
    private bool _outside;

    private void Awake(){
        pontoOriginalMartelo = martelo.transform.position;
    }

    private void Update(){
        if (_outside){
            _timer -= Time.deltaTime;
        } else{
            _timer = 5f;
        }
        
        if (_timer <= 0 && _outside){
            martelo.transform.position = pontoOriginalMartelo;
            _timer = 5f;
            _outside = false;
        }
    }

    private void OnTriggerExit(Collider other){
        var objectColision = other.gameObject;
        if (objectColision.CompareTag("Hammer")){
            _outside = true;
        }
    }

    private void OnTriggerEnter(Collider other){
        var objectColision = other.gameObject;
        if (objectColision.CompareTag("Hammer")){
            _outside = false;
        }
    }
}
