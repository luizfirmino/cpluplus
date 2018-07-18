/*
LUIZ FILHO
INTRODUCTION TO C++
ICE16
5/24/2018

Description:
Write a program to read in a phrase from the keyboard, re-display the text, and display a message
on the following line giving the text's status as a palindrome.  Do not use any arrays or subscripting
in this program, except for arrays of pointers.

A palindrome is a word or phrase which is the same backwards as forwards;
for example "civic", "toot", and "radar" are palindrome words; each word is spelled the same
left to right, as right to left.
"A man, a plan, a canal - Panama!" is a palindrome phrase; ignoring case, spaces and punctuation,
the phrase is spelled the same left to right, as right to left.

Part I
Determine if the phrase entered by the user is a palidrome. Setting a pointer to the first character
in the entered text, and another pointer to the last character, move the pointers toward the center
comparing the characters.  Skip over anything that isn't a letter.  If the pointers meet before finding
any differences, you have a palindrome.  Display a message to that effect on the next console line.
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

bool IsLetter(char letter) {
	letter = tolower(letter);
	char alphabet[27] = {"abcdefghijklmnopqrstuvwxyz"};
	for (int i=0; i < 26; i++) {
		if (letter == alphabet[i]) {
			//cout << "letter: " << letter << " alphabet: " << alphabet[i] << endl; // DEBUG
			return true;
		}
	}
	return false;
}

int main() {

	char text[100];
	
	cout << "Enter a phrase: ";
	cin.getline(text, 100);
	
	int numLetters = 0;
	for(int i=0; i < 100; i++) {
		if (IsLetter(*(text + i))) {
			numLetters++;
		}
	}
	
	//cout << "letters: " << numLetters << endl; // DEBUG
	char* textConverted = new char[(numLetters-1)];

	//cout << "textConverted length: " << sizeof(textConverted) << endl; //DEBUG

	int temp_i = 0;
	for (int i = 0; i < 100; i++) {
		if (IsLetter(*(text + i))) {
			//cout << "*(text + i): " << *(text + i) << endl; //DEBUG
			textConverted[temp_i] = tolower(*(text + i));
			temp_i++;
		}
	}

	//cout << "textConverted: " << textConverted << endl;
	//cout << "temp_i: " << temp_i << endl;

	int first = 0;
	int last = (numLetters-1);
	bool isPalidrome = false;

	for (int i = 0; i < numLetters; i++) {
		//cout << "*(textConverted + first): " << *(textConverted + first) << " *(textConverted + last):" << *(textConverted + last) << endl; //DEBUG
		if (*(textConverted + first) == *(textConverted + last)) {
			first++;
			last--;
			isPalidrome = true;
		}
		else {
			isPalidrome = false;
			break;
		}
	}

	cout << text << endl;
	if (isPalidrome) {
		cout << "Phrase entered is Palidrome!" << endl;
	}
	else {
		cout << "Phrase entered is NOT Palidrome!" << endl;
	}

	system("pause");
	return 0;
}

/*
OUTPUT

Enter a phrase: A man, a plan, a canal - Panama!
A man, a plan, a canal - Panama!
Phrase entered is Palidrome!
Press any key to continue . . .


*/