// Given x ammount of peoples age
// Calculate number of people
// Calculate avarage age

#include <iostream>

using namespace std;

int main() {
	
	double total_age = 0;
	int age = 0;
	int people_count = -1;
	
	cout << "This program calculates avarage age" << endl;
	
	while (age != -1) {
		
	cout << "Enter a persons age or -1 to quit" << endl;
	cin >> age;
	
		total_age = total_age + age;
		people_count++;
	} 
	
	if (age == -1) {
		total_age = total_age + 1;
	};
	
	double avarage_age = total_age / people_count;
	
	cout << "Number of people: " << people_count << endl;
	cout << "Avarage age: " << avarage_age << endl;
}
