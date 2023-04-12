using System;
using HurricaneVR.Framework.ControllerInput;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ResetScene : MonoBehaviour{
    public HVRPlayerInputs inputs;

    private void Update(){
        if (inputs.LeftController.SecondaryButton && inputs.RightController.SecondaryButton){
            SceneManager.LoadScene(SceneManager.GetActiveScene().name);
        }
    }
}
