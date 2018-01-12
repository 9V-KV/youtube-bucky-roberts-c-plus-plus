# include <iostream>

using namespace std;

int main() {
	int w = 100;
	int x = 75;
	int y = 50;
	int z = 25;
	
	// Increment Operators
	cout << ++w << " Should give 101" << endl; // Add 1 before member function runs
	cout << x++ << " Should give 75" << endl; // Add 1 after member function runs
	cout << --y << " Should give 49" << endl; // Add 1 before member function runs
	cout << z-- << " Should give 25" << endl; // Add 1 after member function runs
	
	// Assignments
	int ww = 100;
	int www = 0;
	int xx = 75;
	int xxx = 0;
	int yy = 5;
	int yyy = 0;
	int zz = 25;
	int zzz = 0;
	int aa = 5;
	int aaa = 0;
	
	www = ww += 5;
	cout << www << " Should = 105" << endl;
	xxx = xx -= 10;
	cout << xxx << " Should = 65" << endl;
	yyy = yy *= 15;
	cout << yyy << " Should = 75"  << endl;
	zzz = zz /= 20;
	cout << zzz << " Should = 1"  << endl;
	aaa = aa %= 4;
	cout << aaa << " Should = 1"  << endl;
	
	return 0; // Optional compiler assumes its here like default constructor
}
