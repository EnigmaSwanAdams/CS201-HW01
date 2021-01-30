/*
Enigma Swan Adams
CS 201 Homework 01
1/27/2020

this prgram prints diamonds made of #
at different sizes coresponding to user input
it assumes it will get input of type int
further description of behavior can be found
on blackbuard
**********************************************/

#include <iostream>;
using std::cout;
using std::cin;
using std::endl;

int create_diamond(int);

int main() {
	int n;
	do {
		cout << "enter a positive integer, and I'll print a coresponding \n"
			"diamond made of pound signs, or if you want to quit type a negative number ";
		cin >> n;
		cout << "You entered " << n << endl;
		create_diamond(n);
	} while (n > 0);

	cout << "you have quit. Have a nice day." << endl;

	return 0;
}

int create_diamond(int num) {
    int i, j, k;
    int space = num - 1;
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= space; j++)
            cout << " ";
        space--;
        for (j = 1; j <= (2 * i - 1); j++)
            cout << "#";
        cout << endl;
    }
    space = 1;
    for (i = 1; i <= num-1; i++)
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
