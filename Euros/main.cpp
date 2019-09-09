// Section 8
// Convert EUR to USD

#include <iostream>

using namespace std;

int main(){
	
	const double usd_per_euro {1.19};
	
	cout << "Welcome to the EURO to USD converter" << endl;
	cout << "Enter the value in EUR: ";
	
	double euros {0.0};
	double usd {0.0};
	cin >> euros;
	
	usd = euros*usd_per_euro;
	
	cout << endl << euros << " EURO is equivalent to $" << usd << " USD" << endl;
	return 0;
}