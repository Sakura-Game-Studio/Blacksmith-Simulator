using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;
using UnityEngine.UI;

public class Anvil : MonoBehaviour {
    //[SerializeField] private Image _recipeImage;
    [SerializeField] private List<CraftingRecipeSO> craftingRecipeSoList;
    [SerializeField] private BoxCollider craftAreaBoxCollider;
    [SerializeField] private Transform itemSpawnPoint;
    private CraftingRecipeSO _craftingRecipeSO;

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
        
        //_recipeImage.sprite = _craftingRecipeSO.recipeSprite;
    }

    public void CraftRecipe(){
        Debug.Log("Craft");
        Collider[] colliderArray = Physics.OverlapBox(
            transform.position + craftAreaBoxCollider.center, 
            craftAreaBoxCollider.size,
            craftAreaBoxCollider.transform.rotation);

        List<ItemSO> inputItemList = new List<ItemSO>(_craftingRecipeSO.itensSOList);
        List<GameObject> consumeItemsList = new List<GameObject>();

        foreach (Collider collider in colliderArray){
            if (!collider.TryGetComponent(out ItemSOHolder itemSoHolder)) continue;
            if (!inputItemList.Contains(itemSoHolder.ItemSo)) continue;
            inputItemList.Remove(itemSoHolder.ItemSo);
            consumeItemsList.Add(collider.gameObject);
        }

        if (inputItemList.Count == 0){
            Instantiate(_craftingRecipeSO.outputItemSO.prefab, itemSpawnPoint.position, itemSpawnPoint.rotation);

            foreach (GameObject consumeItemsGameObject in consumeItemsList){
                Destroy(consumeItemsGameObject);
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
}
