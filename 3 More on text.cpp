#include <iostream>

using namespace std;

int main() {
// \n and endl; both do the same thing
	cout << "boy i love bacon " << endl; // Space
	cout << "and ham "; // Text with no space
	
	cout << "\n\n"; // Space
	cout << endl; // Space
	
	cout << "boy i love bacon \n"; // Space
	cout << "and ham ";
	
	return 0;
}
