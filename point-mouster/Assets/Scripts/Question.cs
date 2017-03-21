using System;
using System.Collections;
using System.Collections.Generic;


//namespace AssemblyCSharp
	public class Question
	{
		public string question;
		public List<string> choices;
		public string answer;
		public Question (string q, string ch1, string ch2, string ch3, string ch4, string a)
		{
			question = q;
			choices = new List<String>();
			choices.Add(ch1);
			choices.Add(ch2);
			choices.Add(ch3);
			choices.Add(ch4);
			answer = a;
		}
	}


