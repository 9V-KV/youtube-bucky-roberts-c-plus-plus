#include <iostream>
using namespace std;

int tuna = 80; // Outside function every function can use it, global variable

int pun();

int main() {
	
	int tuna = 20; // inside function only main function can use it, local variable
	cout << "Local veriable: " << tuna << endl;
	int x = 10;	
	cout << "Global veriable: " << ::tuna << endl; // :: To use global veriable
	pun();
	
}

int pun() {
	
	int tuna = ::tuna + 23; // inside function only main function can use it, local variable
	cout << "Global veriable in pun function: " << ::tuna << endl;
	cout << "local veriable in pun function: " << tuna << endl; 
	return 0;
}
