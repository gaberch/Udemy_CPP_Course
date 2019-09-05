/*******************************
 * author Gabe
 * 
 * 
 *******************************/


#include <iostream>


//This is a comment

/*
 * This is a multiple
 * line
 * comment
 */


//Using a modified version of Dijkstra's algorithm to improve space efficiency


int main(){
	
	int fav_num; //this is where my favourite number is stored
	
	std::cout<<"Enter your favourite number between 1 and 100: ";
	std::cin >> fav_num;
	
	std::cout << "Amazing!! That's my favourite number too!" <<std::endl;
	std::cout << "No really!!, " << fav_num <<" is my favourite number!" << std::endl;
	
	return 0;
}