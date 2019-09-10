/*
	Kevin Lehman -  1463553 
    Tarrant County College - COSC 1437- Fall 2017
	Assignment  2-3 Source Code
*/

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;
char menu();



int main()
{
	char menuChoice;
	int remove;
	vector<string> users(10);

	menuChoice = menu();

	if (menuChoice == '1')
	{
		for (string &count : users)
		{
			cout << "Enter New User Name." << endl;
			cin >> count;
		}
		menuChoice = menu();
		if (menuChoice == '2')
		{
			for (int index2 = 0; index2 <= 5; index2++)
			{
				cout << index2 << " " << users[index2] << endl;
			}
			menuChoice = menu();
			if (menuChoice == '3')
			{
				cout << "Which index number do you wish to remove?" << endl;
				cin >> remove;
				users.erase(users.begin() + remove);
				
			}
			menuChoice = menu();
				if (menuChoice == 'X' || menuChoice == 'x')
				{
				users.clear();
				return 0;
				}
		}
	}
	else
	{
		main();
	}
}

char menu()
{
	char menuChoice;

	cout << "Enter Menu Choice:" << endl;
	cout << "1. Enter New User." << endl;
	cout << "2. List All Users." << endl;
	cout << "3. Remove A User. " << endl << endl;
	cout << "X. Exit." << endl;
	cin >> menuChoice;

	return menuChoice;
}

