// Section 6
// Challenge

/* 
    Frank's Carpet Cleaning Service
    Charges:
        $25 per small room
        $35 per large room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of small and large rooms they would like cleaned
    and provide an estimate such as:
     
Estimate for carpet cleaning service
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost : $110
Tax: $6.6
===============================
Total estimate: $116.6
This estimate is valid for 30 days
*/

#include <iostream>

using namespace std;

int main(){
	
	
	cout << "Hello, welcome to Gabe's Carpet Cleaning Service!" << endl;
	
	cout << endl << "How many small rooms would you like cleaned?" << endl;
	int small_rooms {0};
	cin >> small_rooms;
	
	cout << "How about large rooms?" << endl;
	int large_rooms{0};
	cin >> large_rooms;
	
	const double cost_small_room {25.00};
	const double cost_large_room {35.00};
	const double tax {0.06};
	const int expiry {30};// days
	
	cout << endl << "Estimate for carpet cleaning service" << endl;
	cout << "Number of small rooms: " << small_rooms << endl;
	cout << "Number of large rooms: " << large_rooms << endl;
	cout << "Price per small room: $" << cost_small_room << endl;
	cout << "Price per large room: $" << cost_large_room << endl;
	cout << "Cost: $" << small_rooms*cost_small_room + large_rooms*cost_large_room << endl;
	cout << "Tax: $" << (small_rooms*cost_small_room + large_rooms*cost_large_room)*tax << endl;
	cout << "============================" << endl;
	cout << "Total estimate: $" << (small_rooms*cost_small_room + large_rooms*cost_large_room)*(1+tax) << endl;
	cout << "This estimate is valid for " << expiry << " days" << endl;
	
	return 0;
}