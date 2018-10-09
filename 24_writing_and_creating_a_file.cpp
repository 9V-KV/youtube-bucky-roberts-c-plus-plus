#include <iostream>
#include <fstream> // get/outing file: allows you to stream files in and out
using namespace std;

int main() {
	ofstream myfile; // create a object: allows user to create and output files
	myfile.open("newfile.txt"); // if file not on pc its created
	myfile << "This is text that will be entered into the file. \n";
	myfile.close(); // avoid memory leaks
	
	system("pause");
	return 0;
}
