using UnityEngine;
using Random = UnityEngine.Random;

public class ChangeColor : MonoBehaviour{
    private Renderer _cube;
    private Color _newCubeColor;
    private float _random1, _random2, _random3;

    private void Awake(){
        _cube = GetComponent<Renderer>();
    }

    private void OnCollisionEnter(Collision collision){
        _random1 = Random.Range(0f, 1f);
        _random2 = Random.Range(0f, 1f);
        _random3 = Random.Range(0f, 1f);

        _newCubeColor = new Color(_random1, _random2, _random3);
        
        _cube.material.SetColor("_Color", _newCubeColor);
    }
}
