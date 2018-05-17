#include <iostream>
#include <iomanip> // setprecision
using namespace std;

int main()
{
	int video_total = 73, video_watched;
	float progress;

	
	cout << "---------Progress Report---------\n";	
	cout << "How many videos have you watched?\n";
	cin >> video_watched;
	//cout << setprecision(10); // Allows result to be rounded
	cout << progress << " % Complete\n";
	cout << "---------------------------------\n";
	
	progress = float video_total / float video_watched * 100; // Calculation

	return 0;
}
