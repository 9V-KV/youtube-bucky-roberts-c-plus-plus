#include <iostream>

using namespace std;

struct node // Refurse to each element in linked list
{
	int number;
	node *next; // Pointer to next node in linked list
};

// Functions "Function decomistion"
bool isempty(node *head)  // See if list is empty
{
	if(head == NULL)
		return true;
	else
		return false;
}

char menu()
{
	char choice;
	cout << "Menu\n";
	cout << "1. Add an item\n";
	cout << "2. Remove an item\n";
	cout << "3. Show the list\n";
	cout << "4. Exit\n";
	
	cin >> choice;
	
	return choice;
}

void insertasfirstelement(node *&head, node *&last, int number)
// & = pass by refrence
{
	node *temp = new node; // Temparary node
	temp->number = number; // Assign int number to node number
	temp->next = NULL;
	head = temp;
	last = temp;
}

void insert(node *&head, node *&last, int number)
{
	if(isempty(head))
		insertasfirstelement(head, last, number);
	else
	{
		node *temp = new node; // Temparary node
		temp->number = number; // Assign int number to node number
		temp->next = NULL;
		last->next = temp;
	}
}

void remove(node *&head, node *&last)
{
	if(isempty(head))
		cout << "The list is already empty\n";
	else if (head == last)
	{
		delete head;
		head == NULL;
		last == NULL;
	}
	else
	{
		node *temp = head;
		head = head->next;
		delete temp;
	}
}

void showlist(node *current)
{
	if(isempty(current))
		cout << "The list is empty\n";
	else
	{
		cout << "The list contains: \n";
		while(current != NULL)
		{
			cout << current->number << endl;
			current = current->next;
		}
	}
}

int main() {

	node *head = NULL; // Initalize nothing in the list
	node *last = NULL; // Initalize nothing in the list
	char choice;
	int number;
	
	do{
		choice = menu();
		
		switch(choice)
		{
			case '1': cout << "Please enter a number: ";
					  cin >> number;
					  insert(head, last, number);
					  break;
			case '2': remove(head, last);
					  break;
			case '3': showlist(head);
					  break;
			default: cout << "system exit\n";
		}
		
	} while(choice != '4');
	
	return 0;
}
