using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class BookScript : MonoBehaviour {
	
	const int NUM_REVIEW_WORDS = 5;

	public static BookScript bookControl;
	public static int levelCount; // which level the player is on

	// list of all the words
	public string[] words;
	public string[] facts;
	public List<string> reviewWords;
	
	// indices of already picked books so they aren't reused and can be accessed for review
	public List<int> reviewIndices; 
	public static List<int> indexUsed;

	public int numBooks;
	public int maxBooks;
	public Text numBooksCollected;
	public int currentBook;

	void Awake(){
		if (bookControl == null) {
			DontDestroyOnLoad (gameObject);
			bookControl = this;
		} else {
            numBooks = bookControl.numBooks - 1;
            updateBookTracker();
            Destroy (gameObject);
		}
			
	}


	// Use this for initialization
	void Start () {
		currentBook = 0;
		levelCount = 1;

		facts = new string[] {
			/*level 1 facts*/

			//fact 1
			"A pointer variable stores a memory address.", 
			//fact 2
			"Pointers must be declared before they can be used, just like a normal variable. The syntax of declaring a pointer is to place a * in front of the name. " +
			"A pointer is associated with a type too. For example, int *ptr;",
			//fact 3
			"All pointers in a program are likely going to occupy the same amount of space in memory (the size in memory of a pointer depends on the platform where the program runs).", 
			//fact 4
			"The delete[] operator \tdeallocates the memory block pointed to by ptr (if not null), releasing the storage space previously allocated to it by a call to operator new[] " +
			"and rendering that pointer location invalid. For example, delete ptr1;",
			//fact 5
			"Memory leaks occur when new memory is allocated dynamically and never deallocated. " +
			"A dangling pointer is a pointer whose value is the address of memory that the program no longer owns).", 

			/*level 2 facts*/

			//fact 1
			"The & is an operator that returns the memory address of its operand. For example, if var is an integer variable, then &var is its address.", 
			//fact 2
			"When you declare a pointer variable, its content is not initialized. You need to initialize a pointer by assigning it a valid address. This is normally done via the address-of operator (&). " +
			"For example, if pNumber is an int pointer, *pNumber returns the int value 'pointed to' by pNumber. For example,\n\nint number = 88;\n\nint * pNumber;\n\npNumber = &number;", 
			//fact 3
			"The indirection operator is *. This operator returns the value stored in the address kept in the pointer variable. For example, the following would print “99”:\n\nint *pNumber = 99;\n\ncout << *pNumber << endl;", 
			//fact 4
			"In C/C++, by default, arguments are passed into functions by value (except arrays). That is, a clone copy of the argument is made and passed into the function. Changes to the clone copy inside the function do not affect the original argument.", 
			//fact 5
			"You may wish to modify the original copy directly. Do this by passing a pointer of the object into the function, known as pass-by-reference. For example,\n\nint number = 8;\n\nsquare(&number);\n\n…{\n\nvoid square(int * pNumber)}", 

			/*level 3 facts*/

			//fact 1
			"In C/C++, an array's name is a pointer, pointing to the first element (index 0) of the array. For example, suppose that numbers is an int array, numbers is a also an int pointer, pointing at the first element of the array. " +
			"That is, numbers is the same as &numbers[0]. Consequently, *numbers is number[0]; *(numbers+i) is numbers[i].\n", 
			//fact 2
			"As we know, the value of a pointer is an address, so we can have a pointer that holds the address of another pointer. In other words, we can have a pointer that points to another pointer. " +
			"This is helpful when iterating through arrays and working with dynamic 2D arrays. To declare a pointer to another pointer, simply add a second asterisk: int ** ptr.\n", 
			//fact 3
			"Given a pointer, ptr, that points to an array of five elements: int * ptr;  ptr = new int[5]; We want another pointer to point to an array of the same five elements: int * copy_ptr;  A shallow copy does not create an new array in memory. " +
			"Instead, it creates another pointer that points to the pre-existing array. This is accomplished by a simple assignment statement: copy_ptr = ptr;\n", 
			//fact 4
			"Given a pointer, ptr, that points to an array of five elements: int * ptr;  ptr = new int[5]; We want another pointer, copy_ptr, to point to an array of the same five elements. " +
			"int * copy_ptr; A “deep copy” of a dynamic array creates an identical array in a different part of memory. To do this, first you allocate new memory space (copy_ptr = new int[5];), then copy each element in one at a time: for(int i=0; i<5; i++){copy_ptr[i] = ptr[i];}\n", 
			//fact 5
			"The keyword const can be used on pointer parameters, like we do with references. It is used for a similar situation -- it allows parameter passing without copying anything but an address, but protects against changing the data (for functions that should not change the original). " +
			"For example, \n\nconst double * v\n\nThis establishes v as a pointer to an object that cannot be changed through the pointer v.\n"
		};
						
		reviewIndices = new List<int>();
		reviewWords = new List<string> ();
//		numBooksCollected.text = "Books: " + numBooks + "/" + maxBooks;
		if (GameObject.Find("BookScore") != null)
			numBooksCollected = GameObject.Find("BookScore").GetComponent<Text>();
		else
			Debug.Log("Find bookscore is null");


	}
	
	// Update is called once per frame
	void Update () {
		
	}
 
	public void updateLevelCount(){
		levelCount++;
	}

	//increment book count and change the text
	public void updateBookTracker(){
		numBooks++;
		print("numBooks" + numBooks);
        numBooksCollected = GameObject.Find("BookScore").GetComponent<Text>();
        print("maxBooks" + maxBooks);
        numBooksCollected.text = "Books: " + numBooks + "/5"; //+ maxBooks;
	}


	/*
	pickWord is called by PlayerController script
	when player collides with a book

	method generates random number 
	*/


		public string pickWord(){
		print("in pickWord after colliding with book");
		//int randomNumber = Random.Range (0, words.Length);

		Scene scene = SceneManager.GetActiveScene();
		print("Active scene is " + scene.name);
		int chosenWordIndex = -1;

		if(scene.name == "Level1"){
			chosenWordIndex = Random.Range(0,5);
			print("in BookScript outside while 1. index is ");
			print (chosenWordIndex);
			while(isWordUsed(chosenWordIndex)){ //make sure you haven't displayed this fact already
				chosenWordIndex = Random.Range(0,5);
				print("in BookScript while 1. index is " + chosenWordIndex);
			}

		}

		if(scene.name == "Level2"){
			chosenWordIndex = Random.Range(10,15);
			while(isWordUsed(chosenWordIndex)){
				chosenWordIndex = Random.Range(5,10);
				print("in BookScript while 2. index is " + chosenWordIndex);
			}

		}
		if(scene.name == "Level3"){
			chosenWordIndex = Random.Range(10,15);
							print("in BookScript while . index is " + chosenWordIndex);

			while(isWordUsed(chosenWordIndex)){
				chosenWordIndex = Random.Range(10,15);
				print("in BookScript while 3. index is " + chosenWordIndex);
			}
		}


//		while (isWordUsed (chosenFactIndex)) {
//			currentBook++;
//		}

		reviewIndices.Add (chosenWordIndex); // add index to the list so it won't be picked more than once

		return facts [chosenWordIndex];
	}


	public void ResetBooks(){
		numBooks = 0;
		reviewWords.Clear ();
		//reviewIndices.Clear ();
	}

	public bool isWordUsed (int wordIndex){

		foreach (int i in reviewIndices) {
			if ( wordIndex == i ) {
				return true;
			}
		}
		return false;
	}

	public void setReviewWords(){
		foreach (int i in reviewIndices) {
			reviewWords.Add (facts [i]); // add only the words that were picked;
		}
		//ReviewScript.updateReviewNum();
	}
	public List<string> getReviewWords(){
		return reviewWords;
	}

	public bool numBooksCheck(){
		return ( (numBooks % 5) == 0 ) ? true : false;
	}



}
