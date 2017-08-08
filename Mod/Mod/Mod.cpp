// Mod.cpp : Defines the entry point for the console application.
//
//Steven Brown
//CS 2130
//Program 2
/*
a program to generate a hash value of any word or sentence. 
Enter a “sentence” that may be as small as a single word. 
Then compute a hash of the “sentence” using the numeric value 
of each letter (A=a=1 ...  Z=z=26) and mod-31 as the hash function.
*/

#include<iostream>
#include <string> 
#include <conio.h>

using namespace std;

int calculate(string s, int l);//identifier


int main() {

	//vars
	string sentence;
	int value, x;

	cout << "Please enter a sentence with no punctuation:";//prompt
	cin.unsetf(ios::skipws);
	getline(cin, sentence);//capture
	int length = sentence.length();//set length
	cout << "\nSentence: " << sentence;//display sentence
	cout << "\n\nThe sentence length is: " << length;//display length

	for (int i = 0; sentence[i] != '\0'; i++) {//lowercase sentence
		sentence[i] = tolower(sentence[i]);
	}

	value = calculate(sentence, length);//calculate function

	cout << "\n\nValue: " << value << endl << endl;//display sentence value

	x = value % 31;//calculate mod

	cout << value << " mod 31 = " << x;//display mod 31




	cout << "\n\nPress any key to exit...";//exit

	_getch();
}//end main

 //calculate value of each sentence value
int calculate(string s, int l) {
	int totalValue = 0, value = 0;//vars

	for (int i = 0; i < l; i++) {//loop sentence for values
		if (s[i] != 32) {//if there is a space, skip this spot
			value = s[i];//value = ascii number
			totalValue += value - 96;// value - (a value - 1) add to total value
		}
	}//out for
	return totalValue;//return totalValue
}//end function