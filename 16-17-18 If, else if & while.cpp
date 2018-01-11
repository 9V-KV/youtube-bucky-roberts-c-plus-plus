#include <iostream>
using namespace std;

main() {
	
	int run = 1;
	double a = 234.4586;
	int b =132;
	int c =122;
	
	if(a <= b) {
		cout << "test 1 true" << endl;	
	} else if(a >= b) {
		cout << "test 1 false" << endl;
	}
	
	if(c == b || a > b) {
		cout << "test 2 positive" << endl;
		cout << "nested" << endl;	
	}
	
	while(run == 1) {
		cout << "while loop is on" << endl;
		run = run + 1;
	};
		
	while (run == 2) {
		cout << "While loop is off" << endl;
		run = run + 1;
	};
}
