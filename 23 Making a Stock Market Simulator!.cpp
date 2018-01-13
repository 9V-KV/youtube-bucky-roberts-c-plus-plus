// Input starting amount, intrest, & days
// Calculate intrest earned
// Output results

#include <iostream>
using namespace std;

int main() {

int days;
float intrest, ammount;

cout << "Stock Market Simulator" << endl << endl;
cout << "Enter starting ammount: ";
cin >> ammount;
cout << "Enter intrest: ";
cin >> intrest;
cout << "Enter days: ";
cin >> days;
cout << endl;

for(int i = 0; i<=days; i++) {
	ammount = (ammount*intrest) + ammount;
	cout << "Day: " << i << " " << ammount << endl;	
	}
}
