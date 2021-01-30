/*
Enigma Swan Adams
CS 201 Homework 01 additional program 1
1/27/2020

this program asks a user for a positive numbers until 
they zero and then prints the largest 
number that was entered
further description of behavior can be found
on blackbuard
**********************************************/

#include <iostream>;
using std::cout;
using std::cin;
using std::endl;

int main() {

	int maxNum = 0;
	int n;

	cout << "Enter a sequence of postive integers, ending in zero. \n"
		"I will printt he greatest psotive number entered." << endl;
	while (true) {
		cout << "Enter a postive integer (0 to end): ";
		cin >> n ;
		if (n == 0) {
			break;
		}
		else if (n < 0) {
			cout << "That wasn't a postive number, try again" << endl;
		}
		else {
			if (n >= maxNum) { maxNum = n; }
		}
	}
	if (maxNum == 0) { 
		cout << "\nNo positve integers were entered"; 
	}
	else {
		cout << "\nThe greatest number entered: " << maxNum;
	}
}
