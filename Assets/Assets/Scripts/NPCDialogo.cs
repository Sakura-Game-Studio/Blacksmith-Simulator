using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class NPCDialogo : MonoBehaviour{

    public GameObject painelDialogo;
    public GameObject painelPreDialogo;
    public TMP_Text textoDialogo, textoNome;
    public string nome;
    public string[] dialogo;
    public GameObject aceitarBotao, rejeitarBotao;
    private int indice;

    public float velocidadeTexto;
    private bool estaProximo;
    private bool digitando = false;

    public Check check;
    
    void Start(){
        painelPreDialogo.SetActive(true);
        textoNome.text = nome;
        ResetarTexto();
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

        if (textoDialogo.text == dialogo[indice]){
            aceitarBotao.SetActive(true);
            rejeitarBotao.SetActive(true);
        }
    }

    public void PedidoAceito(){
        ProximaLinha();
        check.GetRequests();
    }
    
    public void ResetarTexto(){
        textoDialogo.text = "";
        indice = 0;
        digitando = false;
        painelDialogo.SetActive(false);
        aceitarBotao.SetActive(false);
        rejeitarBotao.SetActive(false);
    }

    IEnumerator Digitando(){
        digitando = true;
        foreach(char letter in dialogo[indice]){
            textoDialogo.text += letter;
            if (!digitando){
                ResetarTexto();
                break;
            }
            yield return new WaitForSeconds(velocidadeTexto);
        }
        digitando = false;
    }

    //Uso futuro caso exista novas linhas de dialogo.
    public void ProximaLinha(){
        if (indice < dialogo.Length - 1){
            indice++;
            textoDialogo.text = "";
            StartCoroutine(Digitando());
        } else{
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
