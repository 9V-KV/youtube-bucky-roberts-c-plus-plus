// Generate numbers 1 to 6
// Always change number

#include <iostream>
#include <cstdlib> // Adds rand() aka random, srand() aka seed random ()
#include <ctime> // Allows accsuss to time on computer "time()"

// Time() = secounds since 1970

using namespace std;

int main() {
	
	int x = 0;
	srand(time(0));
	
	while (x <= 25) {
	cout << 1+(rand()%6) << endl;
	x++;
	};
	
	return 0;
}
