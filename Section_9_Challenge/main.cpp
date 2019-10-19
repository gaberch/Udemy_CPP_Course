// Section 9
// Challenge
/*    
    This challenge is about using a collection (list) of integers and allowing the user
    to select options from a menu to perform operations on the list.
    
    Your program should display a menu options to the user as follows:
    
    P - Print numbers
    A - Add a number
    M - Display mean of the numbers
    S - Display the smallest number
    L - Display the largest number
    Q - Quit

    Enter your choice:
    
The program should only accept valid choices from the user, both upper and lowercase selections should be allowed.
If an illegal choice is made, you should display, "Unknown selection, please try again" and the menu options should be
displayed again.


If the user enters 'P' or 'p', you should display all of the elements (ints) in the list.
If the list is empty you should display "[] - the list is empty"
If the list is not empty then all the list element should be displayed inside square brackets separated by a space. 
For example, [ 1 2 3 4 5 ]
      
If the user enters 'A' or 'a' then you should prompt the user for an integer to add to the list 
which you will add to the list and then display it was added. For example, if the user enters 5
You should display, "5 added".
Duplicate list entries are OK

If the user enters 'M' or 'm'  you should calculate the mean or average of the elements in the list and display it.
If the list is empty you should display, "Unable to calculate the mean - no data"

If the user enters 'S' or 's' you should display the smallest element in the list.
For example, if the list contains [2 4 5 1],  you should display, "The smallest number is 1"
If the list is empty you should display, "Unable to determine the smallest number - list is empty"

If the user enters 'L' or 'l' you should display the largest element in the list
For example, if the list contains [2 4 5 1], you should display, "The largest number is 5"
If the list is empty you should display, "Unable to determine the largest number - list is empty"

If the user enters 'Q' or 'q' then you should display 'Goodbye" and the program should terminate.

Before you begin. Write out the steps you need to take and decide in what order they should be done.
Think about what loops you should use as well as what you will use for your selection logic.

This exercise can be challenging! It may likely take a few attempts before you complete it -- that's OK!

Finally, be sure to test your program as you go and at the end.

Hint: Use a vector!

Additional functionality if you wish to extend this program.

- search for a number in the list and if found display the number of times it occurs in the list
- clearing out the list (make it empty again) (Hint: the vector class has a .clear() method)
- don't allow duplicate entries
- come up with your own ideas!

Good luck!

*/

#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	char cmd;
	int num_input;
	double mean = 0;
	int max_num = 0;
	int min_num = 0;
	vector <int> vec;
	
	
	while (true){
		cout << "\nP - Print numbers" << endl;
		cout << "A - Add a number" << endl;
		cout << "M - Display mean of the numbers" << endl;
		cout << "S - Display the smallet numbers" << endl;
		cout << "L - Display the largest number" << endl;
		cout << "Q - Quit\n" << endl;
		
		cout << "Enter your choice: ";
		cin >> cmd;
		cout << endl;
		if (cmd == 'p' || cmd == 'P')
		{
			if (vec.empty())
			{
				cout << "[] - the list is empty" << endl;
			}
			else
			{
				cout << "[ ";
				for (int i = 0; i < vec.size();i++)
				{
					cout << vec[i] << " ";
				}
				cout << "]" << endl;
			}
		}
		else if (cmd == 'a' || cmd == 'A')
		{
			cout << "Enter an integer to add to the list: ";
			cin >> num_input;
			vec.push_back(num_input);
			mean += num_input;
			if (vec.size() == 1)
			{
				max_num = num_input;
				min_num = num_input;
				
			}
			else
			{
				if (max_num < num_input)
				{
					max_num = num_input;
				}
				if (min_num > num_input)
				{
					min_num = num_input;
				}
			}
			
			
			cout << num_input << " added" << endl;
		}
		else if (cmd == 'm' || cmd == 'M')
		{
			if (vec.empty())
			{
				cout << "Unable to calculate the mean - no data" << endl;
			}
			else
			{
				cout << "The mean is: " << mean/vec.size() << endl;
			}
		}
		else if (cmd == 's' || cmd == 'S')
		{
			if (vec.empty())
			{
				cout << "Unable to determine the smallest number - list is empty" << endl;
			}
			else
			{
				cout << "The smallest number is " << min_num << endl;
			}
		}
		else if (cmd == 'l' || cmd == 'L')
		{
			if (vec.empty())
			{
				cout << "Unable to determine the largest number - list is empty" << endl;
			}
			else
			{
				cout << "The largest number is " << max_num << endl;
			}
		}
		else if (cmd == 'q' || cmd == 'Q')
		{
			cout << "Goodbye..." << endl;
			break;
		}
		else
		{
			cout << "Unknown selection, please try again" << endl;
		}
	}
	return 0;
}