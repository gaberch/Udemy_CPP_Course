// Section 8
// Logical Operators

#include <iostream>

using namespace std;

int main(){
	
//	int num {};
//	const int lower {10};
//	const int upper {20};
	
	cout << boolalpha;
	
	// Determine if an entered integer is between two other integers
	// Assume lower < upper
	
//	cout << "Enter an integer - the bounds are " << lower << " and " << upper << " : ";
//	cin >> num;
//	
//	bool within_bounds{false};
//	
//	within_bounds = (num > lower && num < upper);
//	cout << num << " is between " << lower << " and " << upper << " : " << within_bounds << endl << endl;
	
	// Determine if an integer is outside the two other integers
	// Assume lower < upper
	
//	cout << "Enter an integer - the bounds are " << lower << " and " << upper << " : ";
//	cin >> num;
//	
//	bool outside_bounds{false};
//	
//	outside_bounds = (num < lower || num > upper);
//	cout << num << " is outside " << lower << " and " << upper << " : " << outside_bounds << endl << endl;
	
	// Determine if an integer is exactly on the boundary
	// Assume lower < upper
	
//	cout << "Enter an integer - the bounds are " << lower << " and " << upper << " : ";
//	cin >> num;
//	
//	bool on_bounds{false};
//	
//	on_bounds = (num == lower || num == upper);
//	cout << num << " is outside " << lower << " and " << upper << " : " << on_bounds << endl << endl;
	
	
	// Determine if you need to wear a coat based on temperature and wind speed
	
	bool wear_coat {false};
	double temperature {};
	int wind_speed {};
	
	const int wind_speed_for_coat {25};			// Wind over this values requires a coat
	const double temperature_for_coat {45};		// Temperature below is value requires a coat
	
	// Require a coat if either wind is too high OR temperature is too low
	cout << "\nEnter the current temperature (F): ";
	cin >> temperature;
	cout << "\nEnter windspeed (mph): ";
	cin >> wind_speed;
	
	wear_coat = (temperature < temperature_for_coat || wind_speed > wind_speed_for_coat);
	cout << "Do ou need to wear a coat using OR? " << wear_coat << endl;
	
	// Require a coat if BOTH the windspeed is too high AND temperature is too low
	wear_coat = (temperature < temperature_for_coat && wind_speed > wind_speed_for_coat);
	cout << "Do ou need to wear a coat using AND? " << 
	wear_coat << endl;
	
	return 0;
}