#include <iostream>
using namespace std;

int main() {
	
	// Person 1
	int age = 19;
	int money = 34;
	bool female = true;
	
	// Person 2
	int age_2 = 21;
	int money_2 = 23;
	bool female_2 = false;
	
	if(age >= 21 || money >= 500 || female == true) { // Logic operator "or" is used
		cout << "Sure come right on in" << endl;
	}
	
	if(age <= 21 && money <= 500 || female_2 == true) { // Logic operators "and" and "or" are used
		cout << "Not today man" << endl;
	}
}
