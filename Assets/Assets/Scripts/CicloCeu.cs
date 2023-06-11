using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CicloCeu : MonoBehaviour {
    public double secondsPerMinute = 0.625f; 

	//starting time in hours, use decimal points for minutes
	public double startTime = 9; 

	//show date/time information?
	public bool showGUI= false;

	//this variable is for the position of the area in degrees from the equator, therfore it must stay between 0 and 90.
	//It determines now high the sun rises throughout the day, but not the length of the day yet.
	public double latitudeAngle = 45.0f;

	//The transform component of the empty that tilts the sun's roataion.(the SunTilt object, not the Sun object itself)
	public Transform sunTilt;


	private double day;
	private double min;
	private double smoothMin;
	private double texOffset;

	public Material skyMat;
	private Transform sunOrbit;
	public float velocidadeOrbita;


	public void Start () {
		//skyMat = GetComponent<Material>();
		sunOrbit = sunTilt.GetChild(0).transform;

		if(secondsPerMinute==0){
			Debug.LogError("Error! Can't have a time of zero, changed to 0.01 instead.");
			secondsPerMinute = 0.01f;
		}
	}
	
	public void Update(){
		UpdateSky();
	}

	public void UpdateSky(){
		smoothMin = (Time.time/secondsPerMinute) + (startTime*60);
		day = Mathf.Floor((float)smoothMin/1440)+1;

		smoothMin -= Mathf.Floor((float)smoothMin/1440)*1440; //clamp smoothMin between 0-1440
		min = Mathf.Round((float)smoothMin);

		//sunOrbit.rotation = Quaternion.Euler(0, (float)smoothMin/4, 0);
		//sunOrbit.Rotate(45, (float)smoothMin/4, 0);
		sunOrbit.RotateAround(new Vector3(0,0,0), Vector3.left, Time.deltaTime * velocidadeOrbita);
		
		texOffset = Mathf.Cos(((((float)smoothMin)/1440)*2)*Mathf.PI)*0.25+0.25;
		skyMat.mainTextureOffset = new Vector2(Mathf.Round((float)((texOffset-(Mathf.Floor((float)(texOffset/360))*360))*1000))/1000,0);
	}
}
