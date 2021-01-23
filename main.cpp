/* NO THIS MIND FUCK FUNCTIONS! JUST MAIN() */

#include <iostream>
using namespace std;

int main()
{
	char board[9] =
	{
		' ',' ',' ',
		' ',' ',' ',
		' ',' ',' '
	};
	int  move;

	//Draw Board instructon
	cout << "-----------" << endl;
	cout << " 1 | 2 | 3 " << endl;
	cout << "-----------" << endl;
	cout << " 4 | 5 | 6 " << endl;
	cout << "-----------" << endl;
	cout << " 7 | 8 | 9 " << endl;
	cout << "-----------" << endl;

	cout << endl;

	while (true)
	{
		int i = 0;
		int i = i + 1;

		//Draw Board
		cout << "-----------" << endl;
		cout << " " << board[0] << " | " << board[1] << " | " << board[2] << endl;
		cout << "-----------" << endl;
		cout << " " << board[3] << " | " << board[4] << " | " << board[5] << endl;
		cout << "-----------" << endl;
		cout << " " << board[6] << " | " << board[7] << " | " << board[8] << endl;
		cout << "-----------" << endl;
		
		bool moved = false;
		//Get Mark
		while (moved != true)
		{
			if (i % 2 == 0)
			{
				cout << "move X: ";		cin >> move;

				if (board[move - 1] == ' ')
				{
					board[move - 1] = 'X'; moved = true;
				}
				else
					cout << "\nInvalid!" << endl;
			}
			else
			{
				cout << "move O: ";		cin >> move;

				if (board[move - 1] == ' ')
				{
					board[move - 1] = 'O'; moved = true;
				}

				else
					cout << "\nInvalid!" << endl;
			}
		}

		system("cls||clear");
	//check win:
		//check horizantals
		if (board[0] == board[1] && board[1] == board[2] && board[0] != ' ')
		{ cout << endl << board[0] << " Is WIN!" << endl; break; }
		if (board[3] == board[4] && board[4] == board[5] && board[3] != ' ')
		{ cout << endl << board[3] << " Is WIN!" << endl; break; }
		if (board[6] == board[7] && board[7] == board[8] && board[6] != ' ')
		{ cout << endl << board[6] << " Is WIN!" << endl; break; }

		//check verticals
		if (board[0] == board[3] && board[3] == board[6] && board[0] != ' ')
		{ cout << endl << board[0] << " Is WIN!" << endl; break; }
		if (board[1] == board[4] && board[4] == board[7] && board[1] != ' ')
		{ cout << endl << board[1] << " Is WIN!" << endl; break; }
		if (board[2] == board[5] && board[5] == board[8] && board[2] != ' ')
		{ cout << endl << board[2] << " Is WIN!" << endl; break; }

		//check diagonals
		if (board[0] == board[4] && board[4] == board[8] && board[0] != ' ')
		{ cout << endl << board[0] << " Is WIN!" << endl; break; }
		if (board[2] == board[4] && board[4] == board[6] && board[2] != ' ')
		{ cout << endl << board[2] << " Is WIN!" << endl; break; }
	}

	//Draw Board for demo results
	cout << "-----------" << endl;
	cout << " " << board[0] << " | " << board[1] << " | " << board[2] << endl;
	cout << "-----------" << endl;
	cout << " " << board[3] << " | " << board[4] << " | " << board[5] << endl;
	cout << "-----------" << endl;
	cout << " " << board[6] << " | " << board[7] << " | " << board[8] << endl;
	cout << "-----------" << endl;

	//restart game
	int restart;
	cout << "restart? (1 - yes): ";		cin >> restart;

	if (restart == 1)
	{
		system("cls||clear");
		main();
	}
	else
	{
		system("PAUSE");
		return 0;
	}
}
