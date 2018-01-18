// Create multidimentianal array
// Print spacific values in array
#include <iostream>

using namespace std;

int main() {
	
	// Array with 2 columns and 5 rows 
	int Array[5][2] = {{1,2},{3,4},{5,6},{7,8},{9,10}};

//1,3,5,7,9
//2,4,6,8,10
         
//                      C  R
cout << "3 - " << Array[1][0] << endl;
cout << "8 - " << Array[3][1] << endl;
cout << "9 - " << Array[4][0] << endl;
cout << "1 - " << Array[0][0] << endl;
cout << "5 - " << Array[2][0] << endl;
	
}
