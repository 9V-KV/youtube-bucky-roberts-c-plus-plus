#include <iostream>

using namespace std;

int main() {
	
	int *p = 0; // Pointer veriable of type int
	p = new int[30]; // Allicate 30 contiues memorey locations store first location into p

	// Method 1 of storing into array
	*p = 25; // Stores 25 into memeroy location 1
	p++;
	*p = 35; // Stores 35 into memeroy location 2
	
	// Method 2 of storing into array
	p[0] = 25; // Stores 25 into memeroy location 1
	p[1] = 35; // Stores 35 into memeroy location 2

	for(int j = 0; j < 10; j++) { 
		
		p[j] = 0; // Set every memory location = to 0
		cout << p[j] << " ";
	}
	cout << endl;
	
	int *intList = 0; // Pointer to integer list
	int arraySize = 0;
	cout << "Enter size of the array: ";
	cin >> arraySize;
	intList = new int [arraySize]; // Create array
	
	for(int i = 0; i < arraySize; i++) {
		intList[i] = i * 2; // Incriment data by 2
		cout << intList[i] << " "; // Output data
	}
}
