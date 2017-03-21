using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class StompEnemy : MonoBehaviour {
	// Use this for initialization
	public Text questionDisplay;
	public BossQuestions boss;
	public Button choice1;
	public Button choice2;
	public Button choice3;
	public Button choice4;
	public QuestionCanvas qCanvas;
	public QuestionPanel panel;
	public int answer;
	GameObject button1;
	GameObject button2;
	GameObject button3;
	GameObject button4;
	public static string ques;

	public int index;

	void Start () {
		index = -1;
		boss = FindObjectOfType<BossQuestions> ();
		qCanvas = FindObjectOfType<QuestionCanvas> ();
		panel = FindObjectOfType<QuestionPanel> ();
		button1 = GameObject.FindGameObjectWithTag ("Choice1");
		button2 = GameObject.FindGameObjectWithTag ("Choice2");
		button3 = GameObject.FindGameObjectWithTag ("Choice3");
		button4 = GameObject.FindGameObjectWithTag ("Choice4");



	}
	
	// Update is called once per frame
	void Update () {

	}

	void MC(){
		//assign word choices to button texts
		choice1.GetComponentInChildren<Text>().text = boss.questions[index].choices[0];//boss.choice1;//boss.multiple_choice [0];
		choice2.GetComponentInChildren<Text>().text = boss.questions[index].choices[1];//boss.choice2;//boss.multiple_choice [1];
		choice3.GetComponentInChildren<Text>().text = boss.questions[index].choices[2];//boss.choice3;//boss.multiple_choice [2];
		choice4.GetComponentInChildren<Text>().text = boss.questions[index].choices[3];//boss.choice4;//boss.multiple_choice [3];

	}


	void OnTriggerEnter2D(Collider2D other){
		if (other.tag == "Enemy") {
			print("you've destroyed an enemy");
			Destroy (other.gameObject);
		}

		if (other.tag == "Boss") {
			print("you collided with boss");
			index = boss.pickQuestion(); //returns index from array 
			qCanvas.enableQuestionCanvas ();
			panel.enable ();

			button1.SetActive (true);
			button2.SetActive (true);
			button3.SetActive (true);
			button4.SetActive (true);

			Time.timeScale = 0.0f;

			//ques = boss.pickQuestion ();
			ques = boss.questions[index].question;
			//ques = boss.getQuestionTempStr();
			print ("ques is");
			print (ques);
			questionDisplay.text = ques;
			MC ();



		}

	}
}
