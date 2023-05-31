using System.Collections.Generic;
using TMPro;
using UnityEngine;
using Image = UnityEngine.UI.Image;
using Random = UnityEngine.Random;

public class Check : MonoBehaviour{
    
    [SerializeField] private BoxCollider checkAreaBoxCollider;
    [SerializeField] private List<CraftingRecipeSO> craftingRecipeSoList;
    [SerializeField] private List<ItemSO> itemsToCheck;
    
    [SerializeField] private List<CraftingRecipeSO> requests;

    public TMP_Text textoPedido1;
    public Image imagePedido1;
    public List<GameObject> materiaisPedido1;
    
    public TMP_Text textoPedido2;
    public Image imagePedido2;
    public List<GameObject> materiaisPedido2;

    private void Awake(){
        //GetRequests();
    }

    public void GetRequests(){
        requests.Clear();
        itemsToCheck.Clear();
        
        for (int i = 0; i < 3; i++){
            materiaisPedido1[i].SetActive(false);
            materiaisPedido2[i].SetActive(false);
        }
        
        
        requests.Add(craftingRecipeSoList[Random.Range(0, craftingRecipeSoList.Count)]);
        requests.Add(craftingRecipeSoList[Random.Range(0, craftingRecipeSoList.Count)]);

        textoPedido1.text = requests[0].name;
        textoPedido2.text = requests[1].name;

        imagePedido1.sprite = requests[0].recipeSprite;
        imagePedido2.sprite = requests[1].recipeSprite;
        
        for (int i = 0; i < requests[0].itensSOList.Count; i++){
            materiaisPedido1[i].SetActive(true);
        }
        
        for (int i = 0; i < requests[1].itensSOList.Count; i++){
            materiaisPedido2[i].SetActive(true);
        }

        foreach (CraftingRecipeSO receita in requests){
            itemsToCheck.Add(receita.outputItemSO);
        }
    }

    public void CheckItens(){
        Collider[] colliderArray = Physics.OverlapBox(
            transform.position + checkAreaBoxCollider.center, 
            checkAreaBoxCollider.size,
            checkAreaBoxCollider.transform.rotation);

        List<ItemSO> inputItemList = new List<ItemSO>(itemsToCheck);
        List<GameObject> consumeItemsList = new List<GameObject>();
        
        foreach (Collider collider in colliderArray){
            if (!collider.TryGetComponent(out ItemSOHolder itemSoHolder)) continue;
            if (!inputItemList.Contains(itemSoHolder.ItemSo)) continue;
            if (!collider.GetComponent<Cooling>().Get_Chilled()) continue;
            
            inputItemList.Remove(itemSoHolder.ItemSo);
            consumeItemsList.Add(collider.gameObject);
        }
        
        
        if (inputItemList.Count == 0){
            foreach (GameObject consumeItemsGameObject in consumeItemsList){
                Debug.Log(consumeItemsList);
                Destroy(consumeItemsGameObject);
            }
            GetRequests();
        }
    }
}
