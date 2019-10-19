// Section 9
// Shipping

/* 
    Shipping cost calculator
    
    Ask the user for package dimension in inches
    length, width, height - these should be integers
    
    All dimension must be 10 inches or less or we cannot ship it
    
    Base cost $2.50
    If package volume is greater than 100 cubic inches there is a 10% surcharge
    If package volume is greater than 500 cubic inches there is a 25% surcharge

*/

#include <iostream>
#include <iomanip>

using namespace std;


int main(){
	
	int length{}, width{}, height{};
	double base_cost{2.50};
	
	const int tier1_threshold {100}; //volume
	const int tier2_threshold {500}; //volume
	
	int max_dimension_length {10}; //inches
	
	double tier1_surcharge{0.10}; //extra 10%
	double tier2_surcharge{0.25}; //extra 25%
	
	// All dimensions must be 10 inches or less
	
	int package_volume{};
	
	cout << "Welcome to the package cost calculator" << endl;
	cout << "Enter length, width, and height (in) of the packages separated by spaces: ";
	cin >> length >> width >> height;
	
	if (length > max_dimension_length || width > max_dimension_length || height > max_dimension_length){
		cout << "Sorry, package rejected - max dimension exceeded" << endl;
	}
	else{
		double cost {};
		package_volume = length*width*height;
		cost = base_cost;
		
		if (package_volume > tier2_threshold){
			cost += cost*tier2_surcharge;
			cout << "Adding tier 2 surcharge" << endl;
		}
		else if (package_volume > tier1_threshold){
			cost += cost*tier1_surcharge;
			cout << "Adding tier 1 surcharge" << endl;
		}
		
		cout << fixed << setprecision(2); //prints dollars nicely
		cout << "The volume of your package is (in3): " << package_volume << endl;
		cout << "Your package will cost $" << cost << " to ship." << endl;
		
	}
	
	cout << endl;
	return 0;
}