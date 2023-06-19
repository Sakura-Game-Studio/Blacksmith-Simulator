using System;
using System.Collections;
using TMPro;
using UnityEngine;
using Random = UnityEngine.Random;

public class NPCDialogo : MonoBehaviour{

    public GameObject painelDialogo;
    public GameObject painelPreDialogo;
    public TMP_Text textoDialogo, textoNome;
    public string nome;
    public string[] dialogoAceitar;
    public string[] dialogoEsperando;
    public string[] dialogoAgradecendo;
    public GameObject aceitarBotao;
    private int indice;

    public float velocidadeTexto;
    private bool estaProximo;
    private bool digitando = false;

    public Check check;
    
    private string linhaAtual = "";
    private string linha1 = "";
    private string linha2 = "";
    private string linha3 = "";
    
    void Start(){
        painelPreDialogo.SetActive(true);
        textoNome.text = nome;
        indice = 0;
        ResetarTexto();
        SetDialogo();
    }
    
    void Update() {
        if (estaProximo){
            if (!painelDialogo.activeInHierarchy){
                painelDialogo.SetActive(true);
                if (!digitando){
                    StartCoroutine(Digitando());
                }
            }
        }

        if (Input.GetKeyDown(KeyCode.T)){
            interacaoNPC();
        }

        /*if (textoDialogo.text.Equals(linhaAtual) && indice == 0){
            aceitarBotao.SetActive(true);
        } else{
            aceitarBotao.SetActive(false);
        }*/
    }

    public void interacaoNPC(){
        if (!digitando){
            switch (indice){
                case 0:
                    ProximaLinha();
                    check.GetRequests();
                    break;
                
                case 1:
                    if (check.inputItemList.Count == 0){
                        botaoVenda();
                        check.VenderItens();
                    }
                    break;
                
                case 2:
                    break;
            }
        }
    }

    public void botaoVenda(){
        StartCoroutine(ResetarDialogo());
    }

    IEnumerator ResetarDialogo(){
        ProximaLinha();
        SetDialogo();
        yield return new WaitForSeconds(5);
        ResetarTexto();
        indice = 0;
        StartCoroutine(Digitando());
    }

    public void SetDialogo(){
        linha1 = dialogoAceitar[Random.Range(0, dialogoAceitar.Length - 1)];
        linha2 = dialogoEsperando[Random.Range(0, dialogoEsperando.Length - 1)];
        linha3 = dialogoAgradecendo[Random.Range(0, dialogoAgradecendo.Length - 1)];
    }

    public void ResetarTexto(){
        textoDialogo.text = "";
        digitando = false;
        painelDialogo.SetActive(false);
    }

    IEnumerator Digitando(){
        digitando = true;
        
        switch (indice){
            case 0:
                linhaAtual = linha1;
                break;
            case 1:
                linhaAtual = linha2;
                break;
            case 2:
                linhaAtual = linha3;
                break;
        }

        foreach(char letter in linhaAtual){
            textoDialogo.text += letter;
            if (!digitando){
                ResetarTexto();
                break;
            }
            yield return new WaitForSeconds(velocidadeTexto);
        }
        digitando = false;
    }

    public void ProximaLinha(){
        if (indice < 2){
            indice++;
            textoDialogo.text = "";
            linhaAtual = "";
            StartCoroutine(Digitando());
        } else{
            indice = 0;
            ResetarTexto();
        }
    }

    private void OnTriggerEnter(Collider other){
        if (other.CompareTag("Player")){
            estaProximo = true;
            painelPreDialogo.SetActive(false);
        }
    }

    private void OnTriggerExit(Collider other){
        if (other.CompareTag("Player")){
            estaProximo = false;
            ResetarTexto();
            painelPreDialogo.SetActive(true);
        }
    }
}
