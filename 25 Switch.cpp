#include <iostream>
using namespace std;

int main() {
	
	int age;
		
	cout << "What is your age?" << endl;
	cin >> age;
	
	switch (age) {
		case 16:
			cout << "You can now drive" << endl;
			cout << "Good for you" << endl;
			break;
		case 18:
			cout << "You can know play the lottery" << endl;
			cout << "Waste of money" << endl;
			break;
		case 21:
			cout << "You can know get durnk" << endl;
			cout << "like a child" << endl;
			break;
		case 22:
			cout << "Your getting old" << endl;
			cout << "Get your shit together man" << endl;
			break;
		default:
			cout << "Do great things" << endl;
	}
}
