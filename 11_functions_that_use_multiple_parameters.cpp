#include <iostream>
using namespace std;

int multiple_parameter_function (int x, int y, int a, int b){ // This is our fuction
// The parameters are: "int x, int y, int a, int b"
	int answer = x + y + a + b;
	return answer; // The fuction dose the work and returns only the answer
}

int main(){
	cout << multiple_parameter_function (10, 40, 30, 20); // This defines our parameters
// "10, 40, 30, 20" are out 4 parameters
// cout "multiple_parameter_function" fuction, and we only want the answer.
	return 0;
}
