/*
Enigma Swan Adams
CS 201 Homework 01 additional program 4
1/27/2020
CS 201 Homework 01 additional program 4

this program converts from miles to kilometers
further description of behavior can be found
on blackbuard
**********************************************/

#include <iostream>;
#include"Header.h"
using std::cout;
using std::cin;
using std::endl;

int mileskm() {
	int miles;
	float km;

	cout << "enter a numeber in miles, and I'll convert it to kilometers \n" 
		"if you type a negative number I'll just assume you meant for it to be positive ";
	cin >> miles;

	if (miles < 0) {
		miles = -miles;
	}

	km = miles * 1.609;

	cout << "your number in miles is " << miles << endl;
	cout << "your number in km is " << km << endl;
	
	return 0;
}