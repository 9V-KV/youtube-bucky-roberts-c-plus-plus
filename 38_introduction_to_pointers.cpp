// Create int variable
// Print out memeory address
// Make pointer that points to int variable
// Print out pointer
#include <iostream>

using namespace std;

int main() {
	
	int variable = 0;
	cout << "Original menomry address: " << &variable << endl;
	
	int *pointer = &variable; // "Int" pointer so it can correctly retrive the right size of memory
	cout << "Pointer memory address: " << pointer << endl; // You only need the * once

}
