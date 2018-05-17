#include <iostream>
#include <string>
using namespace std;

class constructors {
	
	public:
		constructors(int x, int y) { // Defalt constructor
		
		cout << "this will be printed on the screen automaticly" << endl;
		
		set_name_0(string name_set_2) {
			private_name_2 = name_set_2;
			}
			
		x = 100;
		z = 200; 
		
		}
			
		set_name_1(string public_name) { // Set names
			private_name = public_name;
		}
		
		string get_names() { // Get names
			return private_name;
			return private_name_2;
			return x;
			return y;
		}	

	private:
		string private_name;
		string private_name_2;
};

main() {

	constructors con_object;
	con_object.set_name_0("Almo");
	con_object.set_name_1("Lucky Buck");
	cout << con_object.get_names();
	
}
