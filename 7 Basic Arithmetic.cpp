#include <iostream>

using namespace std;

int main() {
	
	int x = 10 + 6; // Add
	cout << x << endl;
	
	int y = 10 * 6; // Sub
	cout << y << endl;
	
	int z = 10 / 5; // Div
	cout << z << endl;
	
	double zz = 24.0 / 7.0;
	
	int xx = 24 % 7; // Remainder in this case 3
	
	cout << zz << endl;
	cout << xx << endl; // will only show remainder
	
// Order of presidence
	int t = 6 * (4 + 8) * 4 - 9 / 20; // Order of operation
	cout << t;
	
	return 0;
}
