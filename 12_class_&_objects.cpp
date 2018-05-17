#include <iostream>
using namespace std;

// This part deals with classes
class AlvarosClass{ // AlvarosClass is the class name
	public:
		void coolSaying1(){ // This is a fuction
			cout << "preachin to the choir" << endl;
		}
		void coolSaying2(){ // This is a fuction
			cout << "preachin to the class" << endl;
		}
		void coolSaying3(){ // This is a fuction
			cout << "preachin to the object" << endl;
		}
};

// This part deals with objects
int main(){
	AlvarosClass alvarosObject; // Objects tell what fuction your working with
// So create an object for AlvarosClass which is "alvarosObject"
	alvarosObject.coolSaying1(); // Calls the fuction
// Use the object to call the fuction
	alvarosObject.coolSaying2(); // Calls the fuction
	alvarosObject.coolSaying3(); // Calls the fuction
	return 0;
}
