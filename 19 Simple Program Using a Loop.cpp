// User enters 5 diffrent numbers
// Total numbers
// Use while loop

#include <iostream>

using namespace std;

int main() {
	
	int num_count = 1;
	double user_num_1; 
	double user_num_2;
	double user_num_3; 
	double user_num_4;
	double user_num_5;
	
	cout << "This program adds 5 numbers together" << endl;
	
/* Option 1 Works
	
	while (num_count <= 5) {
	
		cout << "Enter number 1: ";
		cin >> user_num_1;
		num_count++;
		
		cout << "Enter number 2: ";
		cin >> user_num_2;
		num_count++;
		
		cout << "Enter number 3: ";
		cin >> user_num_3;
		num_count++;
		
		cout << "Enter number 4: ";
		cin >> user_num_4;
		num_count++;
		
		cout << "Enter number 5: ";
		cin >> user_num_5;
		num_count++;
		
		double total = user_num_1 + user_num_2 + user_num_3 + user_num_4 + user_num_5;
		
		cout << "Total: " << total << endl;
	}
	
*/

	// Option 2 Works
	
	double total_v2 = 0;
	double user_num;
	
	while(num_count <= 5) {
		cout << "Enter a number: ";
		cin >> user_num;
		total_v2 = total_v2 + user_num;
		num_count++;
	}
	
		cout << "Total: " << total_v2;

	return 0;
}
