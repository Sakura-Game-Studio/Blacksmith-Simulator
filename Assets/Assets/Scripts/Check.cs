using System;
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
    
    public Image imagemCheck1, imagemCheck2;

    public List<GameObject> consumeItemsList;
    public List<ItemSO> inputItemList;

    public NPCDialogo npc;
    
    public FMODUnity.EventReference checkButton;
    private FMOD.Studio.EventInstance checkButtonInstance;

    private void Awake(){
        checkButtonInstance = FMODUnity.RuntimeManager.CreateInstance(checkButton);
        //checkButtonInstance.set3DAttributes(FMODUnity.RuntimeUtils.To3DAttributes(gameObject, GetComponent<Rigidbody>()));
        
        DesligarQuadroPedidos();
    }

    private void Update(){

        ChecarItensBancada();
        
        if (consumeItemsList == null){
            return;
        }

        switch (consumeItemsList.Count){
            case 0:{
                imagemCheck1.gameObject.SetActive(false);
                imagemCheck2.gameObject.SetActive(false);
                break;
            }
            case 1:{
                if (consumeItemsList[0].gameObject.name == itemsToCheck[0].name){
                    imagemCheck1.gameObject.SetActive(true);
                    imagemCheck2.gameObject.SetActive(false);
                }
                else{
                    imagemCheck1.gameObject.SetActive(false);
                    imagemCheck2.gameObject.SetActive(true);
                }
                break;
            }
            case 2:{
                imagemCheck1.gameObject.SetActive(true);
                imagemCheck2.gameObject.SetActive(true);
                break;
            }
        }
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
        
        LigarQuadroPedidos();
    }

    public void ChecarItensBancada(){
        Collider[] colliderArray = Physics.OverlapBox(
            transform.position + checkAreaBoxCollider.center, 
            checkAreaBoxCollider.size,
            checkAreaBoxCollider.transform.rotation);
        
        inputItemList = new List<ItemSO>(itemsToCheck);
        consumeItemsList = new List<GameObject>();

        foreach (Collider collider in colliderArray){
            if (!collider.TryGetComponent(out ItemSOHolder itemSoHolder)) continue;
            if (!inputItemList.Contains(itemSoHolder.ItemSo)) continue;
            if (!collider.GetComponent<Cooling>().Get_Chilled()) continue;
            
            Debug.Log(collider);

            if (!consumeItemsList.Contains(collider.gameObject)){
                inputItemList.Remove(itemSoHolder.ItemSo);
                consumeItemsList.Add(collider.gameObject);
            }
        }
    }

    public void VenderItens(){
        if (inputItemList.Count == 0){
            foreach (GameObject consumeItemsGameObject in consumeItemsList){
                Destroy(consumeItemsGameObject);
            }

            checkButtonInstance.start();
            GetRequests();
            DesligarQuadroPedidos();
            //npc.botaoVenda();
        }
    }

    public void DesligarQuadroPedidos(){
        textoPedido1.gameObject.SetActive(false);
        textoPedido2.gameObject.SetActive(false);
        imagePedido1.gameObject.SetActive(false);
        imagePedido2.gameObject.SetActive(false);
    }
    
    public void LigarQuadroPedidos(){
        textoPedido1.gameObject.SetActive(true);
        textoPedido2.gameObject.SetActive(true);
        imagePedido1.gameObject.SetActive(true);
        imagePedido2.gameObject.SetActive(true);
    }
}
