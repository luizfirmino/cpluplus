/*
LUIZ FILHO
INTRODUCTION TO C++
ICE12
4/25/2018

Description:

Write a program, using 25 or fewer lines of code, to count each occurrence of each lower-case letter in a string.

Start your program by declaring a character array, msg, with a size of 30 of greater.
<pre class="brush: cpp">
char msg[MAX];
</pre>

The user should then type a text string into the array:
<pre class="brush: cpp">
cin.getline(msg, MAX);
</pre>

Your program should now report the number of each character (a-z) found in the array:

a face at the beach
a - 4
b - 1
c - 2
d - 0
e - 3
f - 1
g - 0
h - 2
i - 0
j - 0
k - 0
l - 0
m - 0
n - 0
o - 0
p - 0
q - 0
r - 0
s - 0
t - 2
u - 0
v - 0
w - 0
x - 0
y - 0
z - 0

Here is one way of creating that output using characters in a loop:
for (i=0; i<26; i++)
cout << static_cast<char>(i + 'a') << " - "  << etc..

*/

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

const int MAX = 30;

int main() {

	// Declarations
	char alphabet[27] = {"abcdefghijklmnopqrstuvwxyz"};
	int counter[27] = { 0 };
	char msg[MAX];
	
	cout << "Enter a message (max-length: " << MAX << " caracters): ";
	cin.getline(msg, MAX);

	// Message
	for (int msg_i = 0; msg_i < (sizeof(msg)-1); msg_i++) {
		// Looking for the msg[index] into the Alphabet array
		for (int alp_i = 0; alp_i < (sizeof(alphabet)-1); alp_i++) {
			if (alphabet[alp_i] == msg[msg_i]) {
				counter[alp_i]++;
			}
		}
	}
	
	for (int i = 0; i < (sizeof(alphabet)-1); i++)
		cout << alphabet[i] << " - " << counter[i] << endl;
	
	system("pause");
	return 0;
}


/* RESULT OUTPUT

Enter a message (max-length: 30 caracters): the sunset was beautiful tonight
a - 2
b - 1
c - 0
d - 0
e - 3
f - 1
g - 0
h - 1
i - 2
j - 0
k - 0
l - 1
m - 0
n - 2
o - 1
p - 0
q - 0
r - 0
s - 3
t - 4
u - 3
v - 0
w - 1
x - 0
y - 0
z - 0
Press any key to continue . . .

*/