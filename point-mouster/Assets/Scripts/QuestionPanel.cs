using UnityEngine;
using System.Collections;

public class QuestionPanel : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
		this.GetComponent<SpriteRenderer>().enabled = false;

	}
	
	public void enable () {
		print("QuestionPanel enabled");
		this.GetComponent<SpriteRenderer>().enabled = true;

	}

	public void disable (){
		print("QuestionPanel disabled");
		this.GetComponent<SpriteRenderer> ().enabled = false;
	}
}
