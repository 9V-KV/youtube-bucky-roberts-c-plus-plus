#include <iostream>

using namespace std;

int main() {
	int a;
	int b;
	int sum;
	
	cout << "Enter a number "; // Display data
	cin >> a; // Get data
	cout << "Enter another number ";
	cin >> b;
	
	sum = a + b; // Calculation
	
	cout << a << " + " << b << " = " << sum << endl;
	
	return 0;
}
