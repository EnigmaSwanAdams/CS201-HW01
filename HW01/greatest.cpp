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
#include"Header.h"
using std::cout;
using std::cin;
using std::endl;



int greatest() {

	int maxNum = 0;
	int n;

	cout << "Enter a sequence of postive integers, ending in zero. \n" // intial user prompt
		"I will printt he greatest psotive number entered." << endl;
	while (true) { //using a while(true) loop to keep going unless the user inputs 0
		cout << "Enter a postive integer (0 to end): ";
		cin >> n ;
		if (n == 0) {
			break; // only breaks if the user enters 0
		}
		else if (n < 0) {
			cout << "That wasn't a postive number, try again" << endl;
		}
		else {
			if (n >= maxNum) { maxNum = n; } //this determines the highest number by only storing the highest number its seen
		}
	}
	if (maxNum == 0) { 
		cout << "\nNo positve integers were entered" << endl; // if the user only inputs 0 it will exit the loop to here and let them know nothing was enetered
	}
	else {
		cout << "\nThe greatest number entered: " << maxNum << endl;
	}

	return 0;
}
