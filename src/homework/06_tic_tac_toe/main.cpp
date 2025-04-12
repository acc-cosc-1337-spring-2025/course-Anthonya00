#include "tic_tac_toe.h"
#include <iostream>
#include "tic_tac_toe_manager.h"

using std::cout;
using std::cin;
using std::string;



int main() 
{
	TicTacToeManager naruto;
	TicTacToe game; 
	string goku;
	char user_choice = 'y';

	do
	{
		cout<<"First Player press X or O: ";
		cin>>goku;

		game.start_game(goku);

		int position;

		while(!game.game_over())
		{
			cout<< "Enter your position: ";
			cin>>position;
			game.mark_board(position);
			game.display_board();
		}

		naruto.save_game(game);

		int x_win;
		int o_win;
		
		int ties;
		naruto.get_winner_total(x_win,o_win,ties);
		cout<<"Player X score: "<<x_win <<"\n"<<"Player O score: "<<o_win<<"\n"<<"Number of ties: "<<ties<<"\n";
		

		cout<< "Play again, enter Y or N? ";
		cin>>user_choice;

	}while(user_choice == 'y' ||user_choice == 'Y');

	return 0;
}