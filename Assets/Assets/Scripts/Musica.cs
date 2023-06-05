using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Random = UnityEngine.Random;

public class Musica : MonoBehaviour{
    public AudioClip musica1, musica2, musica3;
    public AudioSource audioSource;

    private int numeroMusica, numeroAnterior;

    private void Start(){
        numeroMusica = Random.Range(1, 3);

        switch (numeroMusica){
            case 1:
                audioSource.clip = musica1;
                break;
            case 2:
                audioSource.clip = musica2;
                break;
            case 3:
                audioSource.clip = musica3;
                break;
        }
    }

    private void Update(){
        if (!audioSource.isPlaying){
            TrocarMusica();
            audioSource.Play();
        }
        
        if (Input.GetKeyDown(KeyCode.Y)){
            audioSource.Stop();
        }
    }

    public void TrocarMusica(){
        while (numeroMusica == numeroAnterior){
            numeroMusica = Random.Range(1, 4);
        }

        numeroAnterior = numeroMusica;

        switch (numeroMusica){
            case 1:
                audioSource.clip = musica1;
                break;
            case 2:
                audioSource.clip = musica2;
                break;
            case 3:
                audioSource.clip = musica3;
                break;
        }
    }
}
