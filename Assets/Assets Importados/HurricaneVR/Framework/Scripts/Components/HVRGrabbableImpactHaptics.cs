using HurricaneVR.Framework.Core;
using UnityEngine;

namespace HurricaneVR.Framework.Components
{

    public class HVRGrabbableImpactHaptics : HVRImpactHapticsBase
    {
        public HVRGrabbable Grabbable;
        
        public FMODUnity.EventReference somImpacto;
        private FMOD.Studio.EventInstance somImpactoInstance;

        protected override void Awake()
        {
            base.Awake();
            somImpactoInstance = FMODUnity.RuntimeManager.CreateInstance(somImpacto);
            somImpactoInstance.set3DAttributes(FMODUnity.RuntimeUtils.To3DAttributes(gameObject, GetComponent<Rigidbody>()));

            if (!Grabbable) TryGetComponent(out Grabbable);
        }

        protected override void Vibrate(float duration, float amplitude, float frequency)
        {
            for (var i = 0; i < Grabbable.HandGrabbers.Count; i++)
            {
                var h = Grabbable.HandGrabbers[i];
                if (!h.IsMine) break;

                h.Controller.Vibrate(amplitude, Data.Duration, Data.Frequency);
                
                Debug.Log("Katiau");
                
                if (somImpactoInstance.isValid()){
                    
                    somImpactoInstance.start();
                }
            }
        }
    }
}