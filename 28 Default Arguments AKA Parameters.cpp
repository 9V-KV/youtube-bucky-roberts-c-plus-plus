// Create function
// Call funtion from main
// Test how input effects veriables
// Cout veriables

#include <iostream>

using namespace std;

int function_volume(int l=2, int w=2, int h=2); // Defalt arguments set to 2

int main() {
	
	cout << "Default argument: " << function_volume() << endl;
	cout << "New argument: " << function_volume(3) << endl;; // 12
	cout << "New argument: " << function_volume(7,9) << endl;; // 126
	cout << "New argument: " << function_volume(4,5,5) << endl;; // This overrides defult arguments
	// Replace then in order recived
	// Compiler uses newest values in this case 5, 6, & 7

}

int function_volume(int l, int w, int h) {
	return l*w*h;
}
