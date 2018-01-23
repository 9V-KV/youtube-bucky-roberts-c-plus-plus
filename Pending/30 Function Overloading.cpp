// declair int and float
// cout both outside main function

#include <iostream>

using namespace std;

	void printNumber(int x) {
		cout << "Passing integer " << x << endl;
	}
	
	void printNumber(float x) {
		cout << "Passing float " << x << endl;
	}

int main() {
	
	int i = 24;
	float f = 35.546;
	
	printNumber(i); // i refrences int i
	printNumber(f);	// f refrences float f
}
