// Print out size of int, char etc
// Print out size of array
// Print out 1 element in array
// Print out Find size of array by dividing by 1 element
#include <iostream>
#include <string>

using namespace std;

int main() {
	
	char text;
	bool variable_0 = true;
	string variable_1 = "This string is longer, much, much, longer";
	int variable_2 = 100;
	float variable_3 = 234.431;
	
	cout << "The size of char: " << sizeof(text) << endl;
	cout << "The size of bool: " << sizeof(variable_0) << endl;
	cout << "The size of string: " << sizeof(variable_1) << endl;
	cout << "The size of int: " << sizeof(variable_2) << endl;
	cout << "The size of float: " << sizeof(variable_3) << endl << endl;
	
	double array[15] = {};
	
	cout << "The size of the array: " << sizeof(array) << endl;
	cout << "The size of one element in the array: " << sizeof(array[0]) << endl;
	cout << "The number of elements in the array: " << sizeof(array) / sizeof(array[0])<< endl;
	
}
