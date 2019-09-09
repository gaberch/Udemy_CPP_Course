// Section 8
// Relational Operators

#include <iostream>

using namespace std;

int main(){
	
	cout << boolalpha;
	
//	cout << "Enter 2 integers separated by a space: ";
	int num1{}, num2{};
//	cin >> num1 >> num2;
//	
//	cout << num1 << " > " << num2 << " : " << (num1 > num2) << endl;
//	cout << num1 << " >= " << num2 << " : " << (num1 >= num2) << endl;
//	cout << num1 << " < " << num2 << " : " << (num1 < num2) << endl;
//	cout << num1 << " <= " << num2 << " : " << (num1 <= num2) << endl;
	
	const int lower {10};
	const int upper {20};
	
	cout << "\nEnter an integer that is greater than " << lower << " : ";
	cin >> num1;
	cout << num1 << " > " << lower << " is " << (num1 > lower) << endl;
	
	cout << "Enter an integer than is less than or equal to " << upper << " : ";
	cin >> num1;
	cout << num1 << " <= " << upper << " is " << (num1 <= upper) << endl;
	
	
	return 0;
}