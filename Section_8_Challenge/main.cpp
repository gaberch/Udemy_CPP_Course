// Section 8 Challenge
/*
	For this program I will be using US dollars and cents.
	
    Write a program that asks the user to enter the following:
	An integer representing the number of cents 
    	
	You may assume that the number of cents entered is greater than or equal to zero
    
	The program should then display how to provide that change to the user.
	
	In the US:
		1 dollar is 100 cents
		1 quarter is 25 cents
		1 dime is 10 cents
		1 nickel is 5 cents, and
		1 penny is 1 cent.
		
	Here is a sample run:
	
	Enter an amount in cents :  92
	
	You can provide this change as follows:
	dollars    : 0
	quarters : 3
	dimes     : 1
	nickels   : 1
	pennies  : 2
	
	Feel free to use your own currency system.
	Also, think of how you might solve the problem using the modulo operator.

	Have fun and test your program!!

*/
# include <iostream>

using namespace std;

int main(){
	
	cout << "Enter a USD amount in cents: ";
	int cents{};
	cin >> cents;
	
	
	
	cout << "\nYou can provide change as follows: " << endl;
	cout << "dollars:\t" << cents/100 << endl;
	cents %= 100;
	cout << "quarters:\t" << cents/25 << endl;
	cents %= 25;
	cout << "dimes:\t\t" << cents/10 << endl;
	cents %= 10;
	cout << "nickels:\t" << cents/5 << endl;
	cents %= 5;
	cout << "cents:\t\t" << cents << endl;
	
	return 0;
}