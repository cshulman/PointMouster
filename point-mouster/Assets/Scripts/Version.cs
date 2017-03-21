using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Version : MonoBehaviour {
	public static Version Instance;
	public int version;

	// Use this for initialization
	void Start () {
		version = getVersion();
		
	}

	//called before component is enabled
	//ensure that this instance is not destroyed on load
	void Awake() {
		Debug.Log("Version is awake");
		if (Instance == null) {
			Debug.Log("Instance in Version is null");
			DontDestroyOnLoad (gameObject);
			Instance = this;
		} else {
			Destroy (gameObject);
		}
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	//private method
	int getVersion() {
		version = Random.Range(1,4);
		Debug.Log("in getVersion: version = " + version);
		return version;
	}
}