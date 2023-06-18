using System;
using System.Linq;
using UnityEngine;

public class Cooling : MonoBehaviour{

    private bool _cooling = false;
    private bool _heated = true;
    [SerializeField] private bool _chilled = false;
    private float _timer = 5f;
    private Renderer _itemRenderer;
    private Material[] _originalMaterials;
    private Material _materialBlade;
    private Color _originalColor;

    private void Awake(){
        _itemRenderer = GetComponent<Renderer>();
        _originalMaterials = _itemRenderer.materials;
        foreach (Material material in _originalMaterials){
            if (material.name.Contains("Blade") || material.name.Contains("Head")){
                _materialBlade = material;
                
                _originalColor = _materialBlade.color;
                _materialBlade.SetColor("_BaseColor", Color.red);
            }
        }
    }

    private void Update(){
        if (_cooling && _heated){
            _timer -= Time.deltaTime;
        }

        if (_timer <= 2.5f && _heated){
            _materialBlade.SetColor("_BaseColor", Color.yellow);
        }

        if (_timer <= 0 && _cooling && _heated){
            _cooling = false;
            _heated = false;
            _chilled = true;
            _timer = 0;
            
            _materialBlade.SetColor("_BaseColor", _originalColor);
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

    public float Get_Timer(){
        return _timer;
    }
}