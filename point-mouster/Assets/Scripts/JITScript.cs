using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class JITScript : MonoBehaviour { 
	// JUST IN TIME INSTRUCTIONS

	public Text wordDisplay;

	public GoogleAnalyticsV4 googleAnalytics;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnTriggerEnter2D(Collider2D other){
		if (other.tag == "Player") {
			switch (this.tag) {

			case "BeginLevel":
				wordDisplay.text = "Use the left and right arrow keys to move the player. \n Use spacebar to jump.";
				Time.timeScale = 0.0f;
				Destroy (this.gameObject);
				break;
			case "Objective":
				wordDisplay.text = "You may encounter some helpful people along your journey...\nMake sure you take their advice.";
				Destroy (this.gameObject);
				break;
			case "Controls":
				wordDisplay.text = "Press the 'p' key to pause/resume. \n\n Press Spacebar to jump.";
				Time.timeScale = 0.0f;
				Destroy (this.gameObject);
				break;
			case "BeforeReview":
				wordDisplay.text = "Press the up key over the door to continue to the review section.";
				Time.timeScale = 0.0f;
				Destroy (this.gameObject);
				break;
			case "BossJIT":
				wordDisplay.text = "Get ready to battle the boss.\n\nJump on the boss to receive a question. Answer 5 questions right to kill the boss.";
				Time.timeScale = 0.0f;
				Destroy (this.gameObject);
				break;
			case "Level2JIT":
				BookScript.bookControl.ResetBooks ();
				
				/*
				Category -- LevelReached
				Action --name (e.g. chavashulman@gmail.com)
				Label -- blank
				Value -- level # 
				This should be added just before a level is loaded. 
				*/
				googleAnalytics.LogEvent (new EventHitBuilder ()
					.SetEventCategory ("LevelReached")
					.SetEventAction (EnterNameScript.Instance.Name)
					.SetEventLabel ("")
					.SetEventValue (2)); //When we create mode for game, it should be entered HERE

				SceneManager.LoadScene ("Level2");
				break;
			
			}
		}
	}



}
