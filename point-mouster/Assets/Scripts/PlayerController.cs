using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class PlayerController : MonoBehaviour {

	/*
	 * Controls the Player's movement, and jumping ability
	 * Deals with booleans for jumping, falling, and being grounded
	 * Also handles killing and respawning the player by delegating to the Level Manager
	 * 
	*/

	public GameButtons gameButton;// object so player can pause game
	//public BookScript currBook;

	public GoogleAnalyticsV4 googleAnalytics;

	public float moveSpeed; // how fast the player moves 
	public float jumpSpeed; // how high player jumps

	public int numBooks;
	public int maxBooks;

	public Text numBooksCollected;
	public Text wordDisplay;

	private Rigidbody2D myRigidBody; // rigid body used for moving and jumping
	private Animator myAnim; // animator to set values to cause animations

    private bool facingRight;

	public Vector3 respawnPosition; // position where player respawns

	//variables for checking if player is on ground or not
	public Transform groundCheck;
	public float groundCheckRadius; // radius of ground check space
	public LayerMask whatIsGround;

	public bool isGrounded; // know if player is on ground
	public bool isJumping; // know if player is jumping

	public AudioSource jumpSound; //sound of player jumping
	public AudioSource hurtSound; 
	public AudioSource rightSound;
	public AudioSource wrongSound;
	public AudioSource collectSound;
	public bool isPaused;

	public HealthBar health;

	public List<string> bookNames = new List<string> ();


	// Use this for initialization
	void Start () {
        facingRight = true;
		health = FindObjectOfType<HealthBar> ();
		myRigidBody = GetComponent<Rigidbody2D> (); // rigid body for physics
		myAnim = GetComponent<Animator> (); // animator for anim changes
		//numBooksCollected.text = "Books: " + numBooks + "/" + maxBooks;
		isPaused = false;
		wordDisplay.text = "";
		respawnPosition = new Vector3 (-9.42f, 0.56f, 0);
        
	}
    void Flip(float horizontal)//flip to go backward
    {
        if((horizontal > 0 && !facingRight) || horizontal < 0 && facingRight)
           {
            facingRight = !facingRight;
            Vector3 theScale = transform.localScale;
            theScale.x *= -1;
            transform.localScale = theScale;
        }
    }
	// Update is called once per frame
	void Update () {

		//pressing x closes canvas 
		if (Input.GetKeyDown (KeyCode.X)) {
			gameButton.ClearWordDisplay ();
		}


        float horizontal = Input.GetAxis("Horizontal");
        Flip(horizontal);
		isGrounded = Physics2D.OverlapCircle (groundCheck.position,groundCheckRadius,whatIsGround);

		//HorizontaL input is either 0(no input), 1(going right), or -1(going left)

		//checking RIGHT input
		if (Input.GetAxisRaw ("Horizontal") > 0f) {         //don't change y value
			myRigidBody.velocity = new Vector3 (moveSpeed, myRigidBody.velocity.y, 0f);
			//transform.localScale = new Vector3 (3f, 3f, 1f); // 3 b/c that's the sprites scale
		} 

		//Checking LEFT input
		else if (Input.GetAxisRaw ("Horizontal") < 0f) {
			myRigidBody.velocity = new Vector3 (-moveSpeed, myRigidBody.velocity.y, 0f);
			//transform.localScale = new Vector3 (-3f, 3f, 1f);
		} 
		//NO INPUT
		else {
     
			myRigidBody.velocity = new Vector3 (0f, myRigidBody.velocity.y, 0f);
		}
        //Debug.Log(isGrounded);

		// checking jump input(space or up)
		if (Input.GetButtonDown ("Jump") && isGrounded) {
            //Debug.Log("JUMP");
			// put jumpSpeed in y to move up by moveSpeed
			myAnim.SetBool ("Jumping", true);
            jumpSound.Play();
            myRigidBody.AddForce(Vector3.up * jumpSpeed);
			//myRigidBody.velocity = new Vector3 (myRigidBody.velocity.x, jumpSpeed, 0f);
			isGrounded = true;
			
		}
		// if on the ground, set falling and jumping to false
		else if(isGrounded){ 
			myAnim.SetBool ("Jumping", false);
			isJumping = false;

		}

		//if p is pressed, pause the game
		if(Input.GetKeyDown (KeyCode.P)){
			if (!isPaused) {
				isPaused = true;
				gameButton.PauseGame ();
			} else {
				isPaused = false;
				gameButton.ResumeGame ();
			}

		}


		//Sets variables in order to change animations
		myAnim.SetFloat("Speed", Mathf.Abs(myRigidBody.velocity.x));
		myAnim.SetBool ("Grounded", isGrounded);

//		if (BookScript.bookControl.numBooks == BookScript.bookControl.maxBooks) {
//
//				BookScript.bookControl.setReviewWords ();
//				SceneManager.LoadScene ("Review1");
//		}

	}
		

	void OnTriggerEnter2D(Collider2D other){
		// handle respawn
		if (other.tag == "Book") {
			print("player collided with book");
			addBook (other.name);
//			numBooks++;
//			numBooksCollected.text = "Books: " + numBooks + "/" + maxBooks;

			//BookScript.bookControl.updateBookTracker();

			collectSound.Play ();

			other.GetComponent<SpriteRenderer> ().enabled = false;
			other.GetComponent<BoxCollider2D> ().enabled = false;

			//currBook = other.GetComponent<BookScript> ();


			wordDisplay.text = BookScript.bookControl.pickWord ();  //Should take word from book


			Destroy (other.gameObject, 1);

			Time.timeScale = 0.0f;
		}
		if (other.tag == "Door") {
			if (BookScript.bookControl.numBooksCheck ()) {
//				if (Input.GetKeyDown(KeyCode.UpArrow)) {
				//ReviewScript.updateReviewNum();
				//ReviewScript.reviewNum++;
				BookScript.bookControl.setReviewWords ();
				Debug.Log("Going to review for Level 1");
				SceneManager.LoadScene ("Review1");
//				}
			}
		}

		if (other.tag == "Door2") {
			if (BossHealthBar.current == 0) {

				EventHitBuilder eventHitBuilder = new EventHitBuilder();
            	eventHitBuilder.SetEventCategory ("LevelReached");
            	eventHitBuilder.SetEventLabel ("");
            	eventHitBuilder.SetEventValue (2);
            	string playerName = PlayerPrefs.GetString ("CurrentPlayer");
				if (playerName != null)
    				eventHitBuilder.SetEventAction (playerName);
				else
    				eventHitBuilder.SetEventAction ("No name");
    			googleAnalytics.LogEvent (eventHitBuilder);
				/*
				Category -- LevelReached
				Action --name (e.g. chavashulman@gmail.com)
				Label -- blank
				Value -- level # 
				
				googleAnalytics.LogEvent (new EventHitBuilder ()
					.SetEventCategory ("LevelReached")
					.SetEventAction (EnterNameScript.Instance.Name)
					.SetEventLabel ("")
					.SetEventValue (2)); //When we create mode for game, it should be entered HERE
				*/


				SceneManager.LoadScene ("Level2");
			}
		}

		if (other.tag == "Door3") {
			if (BossHealthBar.current == 0){

				EventHitBuilder eventHitBuilder = new EventHitBuilder();
            	eventHitBuilder.SetEventCategory ("LevelReached");
            	eventHitBuilder.SetEventLabel ("");
            	eventHitBuilder.SetEventValue (3);
            	string playerName = PlayerPrefs.GetString ("CurrentPlayer");
				if (playerName != null)
    				eventHitBuilder.SetEventAction (playerName);
				else
    				eventHitBuilder.SetEventAction ("No name");
    			googleAnalytics.LogEvent (eventHitBuilder);


    			/*
				googleAnalytics.LogEvent (new EventHitBuilder ()
					.SetEventCategory ("LevelReached")
					.SetEventAction (EnterNameScript.Instance.Name)
					.SetEventLabel ("")
					.SetEventValue (3)); //When we create mode for game, it should be entered HERE
				*/
				SceneManager.LoadScene ("Level3");
			}
		}


		if (other.tag == "Door4") {
			if (BossHealthBar.current == 0){

				EventHitBuilder eventHitBuilder = new EventHitBuilder();
            	eventHitBuilder.SetEventCategory ("Won");
            	eventHitBuilder.SetEventLabel ("");
            	//eventHitBuilder.SetEventValue (2);
            	string playerName = PlayerPrefs.GetString ("CurrentPlayer");
				if (playerName != null)
    				eventHitBuilder.SetEventAction (playerName);
				else
    				eventHitBuilder.SetEventAction ("No name");
    			googleAnalytics.LogEvent (eventHitBuilder);
				
				SceneManager.LoadScene ("Win");
			}
		}
		if (other.tag == "KillPlane") {
			//	gameObject.SetActive (false);
			transform.position = respawnPosition;
			health.changeBar (5);
		}

		if (other.tag == "Checkpoint") {
			respawnPosition = other.transform.position;
		}

	}

	void OnCollisionEnter2D(Collision2D other){
		//handle player on moving platforms, so it doesn't slide off
		if (other.gameObject.tag == "MovingPlatform") {
			//make player's parent the platform to move player at same speed
			transform.parent = other.transform;
		}
	}

	void OnCollisionExit2D(Collision2D other){

		if (other.gameObject.tag == "MovingPlatform") {
			transform.parent = null; // stop making the platform a parent
		}
	}

	public void addBook(string bName){
		print("adding bookname to list");
		bookNames.Add (bName);
	}






}
