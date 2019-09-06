#include <iostream>

using namespace std;


//This program will calculate the area of a room in square feet


int main(){
	
	
	
	
	cout <<"Enter the width of the room (ft): ";
	int room_width {0};
	cin >> room_width;
	
	cout <<"Enter the length of the room (ft): ";
	int room_length {0};
	cin >> room_length;
	
	cout <<"Area of the room is (ft^2): " << room_width*room_length << endl;
	
	return 0;
}