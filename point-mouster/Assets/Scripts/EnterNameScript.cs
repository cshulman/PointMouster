using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class EnterNameScript : MonoBehaviour {

	public GoogleAnalyticsV4 googleAnalytics;

    public static EnterNameScript Instance;

    public Text NameInputFieldText;
    public Text RequiredText;
    public string Name;
    public int ver;

	// Use this for initialization
	void Start () {
        ver = -1;
        Name = null;
	
	}
	
	// Update is called once per frame
	void Update () {

	}

    //Checks to see if Input is empty and shows warning sign if it is
    //Saves it in PlayerPrefs and continues to Level1 scene otherwise
    public void Continue()
    {
        Name = NameInputFieldText.text.Trim();
        Debug.Log("Name is " + Name);
        if (string.IsNullOrEmpty(Name))
        {
            RequiredText.text = "*Required";
            return;
        }
        ver = Version.Instance.version;
        Debug.Log("in EnterNameScript: version = " + ver);

        PlayerPrefs.SetString("CurrentPlayer", Name);
		googleAnalytics.LogEvent (new EventHitBuilder ()
			.SetEventCategory ("ModeOfPlay")
			.SetEventAction (Name)
			.SetEventLabel ("")
			.SetEventValue (ver)); //When we create mode for game, it should be entered HERE
        SceneManager.LoadScene("Level1");
    }

    public void BackToTitle()
    {
        SceneManager.LoadScene("TitleScreen");
    }

}
