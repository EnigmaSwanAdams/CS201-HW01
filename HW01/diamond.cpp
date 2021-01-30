/*
Enigma Swan Adams
CS 201 Homework 01 main program
1/27/2020

this program prints diamonds made of #
at different sizes coresponding to user input
it assumes it will get input of type int
further description of behavior can be found
on blackbuard
**********************************************/

#include <iostream>;
using std::cout;
using std::cin;
using std::endl;

int create_diamond(int); //declaration of the function that makes the diamond

int diamond() {
	int n;
	do { 
		cout << "enter a positive integer, and I'll print a coresponding \n" //user prompt, it will keep asking and making diamonds until the user enters the comaand to quit (0 or a negative number)
			"diamond made of pound signs, or if you want to quit input 0 or a negative number "; // you say in the homework to use
		cin >> n;                                                                                // "proper error handling, but I thought
                                                                                                 // we didn't know how to test user input for characteristics yet?
		cout << "You entered " << n << endl;
		create_diamond(n);
	} while (n >= 0);

	cout << "you have quit. Have a nice day." << endl;

	return 0;
}

int create_diamond(int num) { //this function creates a diamond based on the integer passed to it
    int i, j;              // this first outer loop handles the top half and widest point of the diamond
    int space = num - 1;
    for (i = 1; i <= num; i++) // i coresponds to the line number we are on
    {
        for (j = 1; j <= space; j++)
            cout << " ";
        space--;
        for (j = 1; j <= (2 * i - 1); j++)
            cout << "#";
        cout << endl; 
    }
    space = 1;
    for (i = 1; i <= num-1; i++) // this second outer loop handles the remaining portion of the diamond
    {
        for (j = 1; j <= space; j++)
            cout << " ";
        space++;
        for (j = 1; j <= (2 * (num - i)-1); j++)
            cout << "#";
        cout << endl;
    }
    cout << endl;
	return 0;
}
