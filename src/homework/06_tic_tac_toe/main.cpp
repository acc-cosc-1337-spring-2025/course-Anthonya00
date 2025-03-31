#include "tic_tac_toe.h"
#include <iostream>

using std::cout;
using std::cin;
using std::string;



int main() 
{

	TicTacToe game; 
	string goku;
	char user_choice = 'y';

	do
	{
		cout<<"First Player press X or O ";
		cin>>goku;

		game.start_game(goku);

		int position;

		while(!game.game_over())
		{
			cout<< "Enter your position";
			cin>>position;
			game.mark_board(position);
			game.display_board();
		}

		cout<< "Play again, enter y or Y? ";
		cin>>user_choice;

	}while(user_choice == 'y' ||user_choice == 'Y');

	return 0;
}