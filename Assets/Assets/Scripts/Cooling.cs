using System;
using System.Linq;
using UnityEngine;

public class Cooling : MonoBehaviour{

    private bool _cooling = false;
    private bool _heated = true;
    private bool _chilled = false;
    private float _timer = 5f;
    private Renderer _itemRenderer;
    private Material[] _originalMaterial;

    private void Awake(){
        _itemRenderer = GetComponent<Renderer>();
        _originalMaterial = _itemRenderer.materials;
        foreach (Material material in _originalMaterial){
            if (material.name.Contains("Blade")){
                material.SetColor("_Color", Color.red);
            }
        }
    }

    private void Update(){
        if (_cooling && _heated){
            _timer -= Time.deltaTime;
        }

        if (_timer <= 2.5f && _heated){
            _itemRenderer.material.SetColor("_Color", Color.yellow);
        }

        if (_timer <= 0 && _cooling && _heated){
            _cooling = false;
            _heated = false;
            _chilled = true;
            _timer = 0;
            
            foreach (Material material in _originalMaterial){
                if (material.name.Contains("Blade")){
                    material.SetColor("_Color", _originalMaterial[2].color);
                }
            }
        }
    }

    public void OnBucket(){
        _cooling = true;
    }
    
    public void OffBucket(){
        _cooling = false;
    }

    public bool Get_Chilled(){
        return _chilled;
    }
}