#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int main()
{
	char x;
	string choice_user;
	string choice_comp;
	int user,comp;
	do
	{
		cout << "Enter [Rock], [Scissors], [Paper]" << endl;
		cout << "EXIT enter [x]" << endl;
		cin >> choice_user;
		comp = rand() % 3;
		if (choice_user == "rock" || choice_user == "Rock")
		{
			user = 0;
		}
		else if (choice_user == "scissors" || choice_user == "Scissors")
		{
			user = 1;
		}
		else if (choice_user == "paper" || choice_user == "Paper")
		{
			user = 2;
		}
		else if(choice_user == "x")
		{
			break;
		}
		else
		{
			cout << "Incorect word. Try Again";
		}

		if (comp == 0)
		{
			cout << "Rock";
		}
		else if (comp == 1)
		{
			cout << "Scissors";
		}
		else if (comp == 2)
		{
			cout << "Paper";
		}

		cout << endl;
		if (user == comp)
		{
			cout << "WIN FRIENDSHIP";
		}
		else if (user > comp)
		{
			cout << "YOU WIN";
		}
		else if (user < comp)
		{
			cout << "YOU LOSS";
		}
		cout << endl<<endl;
	} while (true);
	_getch();
	return 0;
}