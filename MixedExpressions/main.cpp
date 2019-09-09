// Section 8
// Mixed Type Expressions
/*
    Ask the user to enter 3 integers
    Calculate the sum of the integers then
    calculate the average of the 3 integers.
    
    Display the 3 integers entered
    the sum of the 3 integers and
    the average of the 3 integers.
*/

#include <iostream>

using namespace std;

int main(){
	
	int num1{}, num2{}, num3{};
	int total{};
	const int count{3};
	
	cout << "Enter three integers separated by spaces: ";
	cin >> num1 >> num2 >> num3;
	
	total = num1+num2+num3;
	
	double average {0.0};
	
	average = static_cast<double> (total) / count;
	//average = (double)total/count; //old style of doing this. Better to use static case to confirm
									 //that variable can actually be converted to a double
	
	cout << "The three numbers were: " << num1 << ", " << num2 << ", " << num3 << endl;
	cout << "The sum of the numbers is: " << total << endl;
	cout << "The average of the numbers is: " << average << endl;
	
	return 0;
}