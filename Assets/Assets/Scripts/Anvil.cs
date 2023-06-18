using System;
using System.Collections.Generic;
using HurricaneVR.Framework.Core.Utils;
using TMPro;
using UnityEngine;
using UnityEngine.Serialization;
using UnityEngine.UI;

public class Anvil : MonoBehaviour {
    //[SerializeField] private Image _recipeImage;
    [SerializeField] private List<CraftingRecipeSO> craftingRecipeSoList;
    [SerializeField] private BoxCollider craftAreaBoxCollider;
    [SerializeField] private Transform itemSpawnPoint;
    private CraftingRecipeSO _craftingRecipeSO;
    private int _totalHits;

    public TMP_Text textoReceita;
    public Image imagemReceita;
    
    public HVRObjectCollisionDisablerParent disabler;

    private void Awake() {
        NextRecipe();
    }

    public void NextRecipe() {
        if (_craftingRecipeSO == null) {
            _craftingRecipeSO = craftingRecipeSoList[0];
        } else{
            int index = craftingRecipeSoList.IndexOf(_craftingRecipeSO);
            index = (index + 1) % craftingRecipeSoList.Count;
            _craftingRecipeSO = craftingRecipeSoList[index];
        }

        textoReceita.text = _craftingRecipeSO.name;
        imagemReceita.sprite = _craftingRecipeSO.recipeSprite;
        
        _totalHits = _craftingRecipeSO.totalHits;
        //_recipeImage.sprite = _craftingRecipeSO.recipeSprite;
    }

    public void CraftRecipe(){
        Collider[] colliderArray = Physics.OverlapBox(
            transform.position + craftAreaBoxCollider.center, 
            craftAreaBoxCollider.size,
            craftAreaBoxCollider.transform.rotation);

        List<ItemSO> inputItemList = new List<ItemSO>(_craftingRecipeSO.itensSOList);
        List<GameObject> consumeItemsList = new List<GameObject>();

        foreach (Collider collider in colliderArray){
            if (!collider.TryGetComponent(out ItemSOHolder itemSoHolder)) continue;
            if (!inputItemList.Contains(itemSoHolder.ItemSo)) continue;
            if (!collider.GetComponent<Heating>().getHeated()) continue;
            inputItemList.Remove(itemSoHolder.ItemSo);
                consumeItemsList.Add(collider.gameObject);
        }

        if (inputItemList.Count == 0){
            if (_totalHits > 0){
                _totalHits--;
            }
            if(_totalHits == 0){
                _totalHits = _craftingRecipeSO.totalHits;
                GameObject novoObjeto = Instantiate(_craftingRecipeSO.outputItemSO.prefab, itemSpawnPoint.position, itemSpawnPoint.rotation);
                
                //disabler.Transforms.Add(novoObjeto.transform);
                
                foreach (GameObject consumeItemsGameObject in consumeItemsList){
                    Destroy(consumeItemsGameObject.transform.parent.gameObject);
                }
            }
        }
    }

    private void Update(){
        if (Input.GetKeyDown(KeyCode.E)){
            CraftRecipe();
        }
        if (Input.GetKeyDown(KeyCode.R)){
            NextRecipe();
        }
    }

    private void OnTriggerStay(Collider other){
        Collider[] colliderArray = Physics.OverlapBox(
            transform.position + craftAreaBoxCollider.center, 
            craftAreaBoxCollider.size,
            craftAreaBoxCollider.transform.rotation);
        
        foreach (Collider collider in colliderArray){
            if (collider.CompareTag("Hammer")){
                CraftRecipe();
            }
        }
    }
}
