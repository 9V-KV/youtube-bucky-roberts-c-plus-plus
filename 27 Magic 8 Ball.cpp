// Cin question
// Cout random answer
// Always change answer

#include <iostream>
#include <cstdlib> // rand() & srand()
#include <ctime> // time()
#include <string>
using namespace std;

int main() {
	
string question;
int random;
char redue = 'y';

do {
	
	cout << "What is your question?" << endl;
	getline (cin,question);
	
	//srand(time (0));
	random = 1+(rand()%20);
	
	switch(random) { 
		case 1: // Good
			cout << "It is certain" << endl;
			break;
		case 2:
			cout << "It is decidedly so" << endl;
			break;
		case 3:
			cout << "Without a doubt" << endl;
			break;
		case 4:
			cout << "Yes definitely" << endl;
			break;	
		case 5:
			cout << "You may rely on it" << endl;
			break;	
		case 6:
			cout << "As I see it, yes" << endl;
			break;	
		case 7:
			cout << "Most likely" << endl;
			break;	
		case 8:
			cout << "Outlook good" << endl;
			break;	
		case 9:
			cout << "Yes" << endl;
			break;	
		case 10:
			cout << "Signs point to yes" << endl;
			break;	
		case 11: // Ok
			cout << "Reply hazy try again" << endl;
			break;	
		case 12:
			cout << "Ask again later" << endl;
			break;	
		case 13:
			cout << "Better not tell you now" << endl;
			break;	
		case 14:
			cout << "Cannot predict now" << endl;
			break;	
		case 15:
			cout << "Concentrate and ask again" << endl;
			break;	
		case 16: // Bad
			cout << "Don't count on it" << endl;
			break;	
		case 17:
			cout << "My reply is no" << endl;
			break;	
		case 18:
			cout << "My sources say no" << endl;
			break;	
		case 19:
			cout << "Outlook not so good" << endl;
			break;	
		case 20:
			cout << "Very doubtful" << endl;
			break;
		default:
			cout << "There is an error" << endl;
		
			}
		}  while (redue == 'y' || redue == 'Y');
	}
