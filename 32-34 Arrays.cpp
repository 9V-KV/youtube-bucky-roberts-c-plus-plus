#include <iostream>

using namespace std;

int arrayfunction_0();
int arrayfunction_1();
int arrayfunction_2();

int main() { // 32 Arrays
	
	cout << "Task 1 Set array of elements equal to values";
	// Array initalizer list 1 line bellow
	int array[5] = {213,37,748,63,720}; // array of type int 5 elements long {x,x,x} stores values
	cout << endl << "Task 1 Two values in array: ";
	cout << array[0] << ", "; // Cout first element 0
	cout << array[4];
	
	cout << endl << "All values in array: " << endl;
	for (int i=0; i<5; i++) { // Create int i = 0, loop while 5 is greater then i, add 1 to i
		cout << "Array value " << i << ": " << array[i] << endl;
	}
	
	arrayfunction_0();
	arrayfunction_1();
	arrayfunction_2();
	return 0;
	
}

int arrayfunction_0() { // 33 Create an array using loops
	
	cout << endl << "Task 2 Set elements equal to 999: ";
	int array_2[15];
	for (int i=0; i<15; i++) {
		array_2[i] = 999;
		cout << array_2[i] << ", ";
	}
	cout << endl;
}

int arrayfunction_1() {
	
	cout << endl << "Task 3 Set spacific element equal to integer: ";
	int array_3[12];
	array_3[0] = 100;
	array_3[1] = 80;
	array_3[2] = 70;
	
	for (int i=0; i<12; i++) {
		cout << array_3[i] << ", ";
	}
	cout << endl << endl;
}

int arrayfunction_2() { // 34 Using Arrays in calculations
	
	cout << endl << "Task 4 Sum of values in a array" << endl;
	int tuna[5] = {50,25,25,100,0};
	int sum = 0;
	
	for(int j = 0; j<5; j++) { // j = 0, loop while 5 is grater then j, add 1 to j
		sum += tuna[j];	// Add sum and tuna element 0, then set tuna = to new sum, then repeat
	}
	cout << "Sum of values in array: " << sum;
}
