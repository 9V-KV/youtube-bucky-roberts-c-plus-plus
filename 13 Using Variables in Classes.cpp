// Store a name in  a private
// call it form main
#include <iostream>
#include <string>

using namespace std;

class NameClass {
	public:

	void setname (string publicname) {	
			privatename = publicname;	
			//publicname = privatename; // This one gives nothing?
			// = means set right value equal to left value	
		}
	
	string getname () {
			return privatename;
		}
	
	private:
		string privatename;	
};

int main () {
	NameClass object;
	object.setname("Bobby Walice");
	cout << object.getname();
	
	return 0;
}
