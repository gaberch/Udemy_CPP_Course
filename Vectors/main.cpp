// Section 7
// Vectors

#include <iostream>
#include <vector> // don't forget this in order to use vectors

using namespace std;

int main(){
	
//	vector <char> vowels;		//empty
//	vector <char> vowels (5);	//5 initialized to zero
//	vector <char> vowels {'a','e','i','o','u'};
//	
//	cout << vowels[0] << endl;
//	cout << vowels[4] << endl;
//	
////	vector <int> test_scores(3);		// 3 elements all initialized to zero
////	vector <int> test_scores(3,100); 	// 3 elements all initialized to 100
////	
//	vector <int> test_scores{100,98,89};
//	
//	cout << "\nTest scores using array syntax:" << endl;
//	cout << test_scores[0] << endl;
//	cout << test_scores[1] << endl;
//	cout << test_scores[2] << endl;
//	
//	cout << "\nTest scores using vector syntax:" << endl;
//	
//	cout << test_scores.at(0)<< endl;
//	cout << test_scores.at(1)<< endl;
//	cout << test_scores.at(2)<< endl;
////	cout << test_scores.at(3); //Will trigger out of range exception
//
//	cout << "\nThere are " << test_scores.size() << " scores in the vector" << endl;
//	
//	cout << "\nEnter 3 new test scores:" << endl;
//	cin >> test_scores.at(0);
//	cin >> test_scores.at(1);
//	cin >> test_scores.at(2);
//	
//	cout << endl << "Updated test scores are: " << endl;
//	cout << test_scores.at(0)<< endl;
//	cout << test_scores.at(1)<< endl;
//	cout << test_scores.at(2)<< endl;
//	
//	cout << "Enter a test score to add to the vector:" << endl;
//	
//	int added_score {0};
//	cin >> added_score;
//	
//	test_scores.push_back(added_score);
//	
//	cout << "\nEnter one more test score to add to the vector:" << endl;
//	cin >> added_score;
//	
//	test_scores.push_back(added_score);
//	
//	cout << "\nTest score are now as follows:" << endl;
//	
//	cout << test_scores.at(0) << endl;
//	cout << test_scores.at(1) << endl;
//	cout << test_scores.at(2) << endl;
//	cout << test_scores.at(3) << endl;
//	cout << test_scores.at(4) << endl;
//	
//	cout << "\nThere are now " << test_scores.size() << " scores in the vector." << endl;
//	
////	cout << "This should case an exception!!" << test_scores.at(10) << endl;
//	
//	// Example of a 2D vector
//	
//	vector <vector <int>> movie_ratings
//	{
//		{1,2,3,4},
//		{1,2,4,4},
//		{1,3,4,5}
//	};
//	
//	cout << "\nHere are the movie ratings for reviewer #1 using syntax:" << endl;
//	cout << movie_ratings[0][0] << endl;
//	cout << movie_ratings[0][1] << endl;
//	cout << movie_ratings[0][2] << endl;
//	cout << movie_ratings[0][3] << endl;
//	
//	cout << "\nHere are the movie ratings for reviewer #1 using vector syntax:" << endl;
//	cout << movie_ratings.at(0).at(0) << endl;
//	cout << movie_ratings.at(0).at(1) << endl;
//	cout << movie_ratings.at(0).at(2) << endl;
//	cout << movie_ratings.at(0).at(3) << endl;
	
	vector <int> games;
	cout << "The size of the vector after initialization is: " << games.size() << endl;
	cout << "Checking if empty: " << games.empty() << endl;
	
	games.push_back(1);
	games.push_back(2);
	
	cout << "Added a few elements to vector. Is it still empty? - " << games.empty() << endl;
	cout << "Vector size: " << games.size() << endl;
	
	games.clear();
	
	cout << "Used clear function. Is it empty? - " << games.empty() << endl;
	cout << "Vector size: " << games.size() << endl;
	
	games.resize(0);
	
	cout << "Vector has been resized to 10, confirm: " << games.size() << endl;
	
	
	
	
	

	return 0;
}