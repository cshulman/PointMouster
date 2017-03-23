using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class MenuButtons : MonoBehaviour {

	public static int currLevel;

	public static MenuButtons getLevel;

	public GoogleAnalyticsV4 googleAnalytics;

	//private static MenuButtons instance = null;


	public void Start()
	{
		currLevel = 0;
	}
	//must initialize all variables!!
	void Awake () 
	{
     /*	if(instance == null)
     	{
          	instance = this;
         	 DontDestroyOnLoad(gameObject);
     	}
     	else if(instance != this){
          Destroy(this.gameObject);
          return;
     	}*/
     	currLevel = 0;
 	}

	

	public void PlayGame()
	{
		SceneManager.LoadScene ("EnterName");
	}

    public void ResumeGame()
    {
        
        SceneManager.LoadScene("Level1");
    }

	public int returnLevel()
	{

		return currLevel;
	}

	public void PickBossToGoTo(){
		Debug.Log ("in PickBossToGoTo");
		if (currLevel == 0) {
			Debug.Log ("curr level= " + SceneManager.GetActiveScene ().name);
			currLevel++;
			Debug.Log ("curr level "  + currLevel);
			GoToBoss ();
		}
		
		else if (currLevel == 1) {
			currLevel++;
			GoToBoss2 ();
			//GoToLevel3();
			//GoToBoss2 ();
		} else if (currLevel == 2) {
			currLevel++;
			GoToBoss3 ();
		}
	}

	public  void GoToBoss(){
		Debug.Log ("in GoToBoss");
		SceneManager.LoadScene ("Boss Battle");
	}

	public void GoToBoss2(){
		SceneManager.LoadScene ("Boss Battle 2");
	}

	public void GoToBoss3(){
		SceneManager.LoadScene ("Boss Battle 3");
	}

	public void GoToInstructions(){
		SceneManager.LoadScene ("Instructions");
		// continue animation for instructions scene
		Time.timeScale = 1f;
	}

	public void StartOver(){
		SceneManager.LoadScene ("TitleScreen");
	}

	public void Settings(){
		SceneManager.LoadScene ("Settings");
	}

	public void QuitGame()
	{
        PlayerPrefs.DeleteKey("CurrentPlayer");
		Application.Quit ();
	}

	public void GoToWelcome(){
		SceneManager.LoadScene ("Welcome");
	}

	public void GoToEnterName(){
		SceneManager.LoadScene ("EnterName");
	}

	public void GoToReview1(){
		SceneManager.LoadScene ("Review1");
	}

	/*
	Category -- LevelReached
	Action --name (e.g. chavashulman@gmail.com)
	Label -- blank
	Value -- level # 
	*/
	public void GoToLevel2(){

		googleAnalytics.LogEvent (new EventHitBuilder ()
				.SetEventCategory ("LevelReached")
				.SetEventAction (EnterNameScript.Instance.Name)
				.SetEventLabel ("")
				.SetEventValue (2)); //When we create mode for game, it should be entered HERE

		SceneManager.LoadScene ("Level2");
	}

	public void GoToLevel3(){

		googleAnalytics.LogEvent (new EventHitBuilder ()
				.SetEventCategory ("LevelReached")
				.SetEventAction (EnterNameScript.Instance.Name)
				.SetEventLabel ("")
				.SetEventValue (3)); //When we create mode for game, it should be entered HERE

		SceneManager.LoadScene ("Level3");
	}

	public void HomeScreen(){
		SceneManager.LoadScene ("Home");
	}

	public void GoToTitle(){
		SceneManager.LoadScene ("TitleScreen");
	}
	public void GoToCredits(){
		SceneManager.LoadScene ("Credits");
	}

	public void GoToNextLevel(){
		SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1); // go to next level in game
	}

	public void TryAgain(){
		BookScript.bookControl.ResetBooks ();
		BookScript.bookControl.reviewIndices.Clear ();
		SceneManager.LoadScene ("EnterName");
	}
}
