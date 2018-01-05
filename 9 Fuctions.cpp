#include <iostream>
using namespace std;

// There are two options we can put our fuction above the main fuction
// Or we can tell the compiler that there is a fuction and it need to find it

void firstfuction(); // There is a fuction called "firstfuction"
					 // this tells the compiler to look for it.

int main(){
	firstfuction(); // This is calling the fuction
	return 0;
}

void firstfuction(){ // This is our fuction
	cout << "Oooo i am text on the screen" << endl;
}
