#include "tic_tac_toe.h"
#include <iostream>
#include <memory>
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

using std::cout;
using std::cin;
using std::string;



int main() 
{
	TicTacToeManager naruto;
	unique_ptr<TicTacToe> game; 
	string goku;
	string gohan;
	char user_choice = 'y';
	do
	{	
		cout<< "Do you want to play TicTacToe 3 or 4: ";
		cin>>gohan;

		if (gohan == "4"){

			game = std:: make_unique<TicTacToe4>();
		}
		else{

			game = std:: make_unique<TicTacToe3>();
		}

		cout<<"First Player press X or O: ";
		cin>>goku;

		game ->start_game(goku);

		int position;

		while(!game ->game_over())
		{
			cout<< "Enter your position: ";
			cin>>position;
			game ->mark_board(position);
			game ->display_board();
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

	naruto.display();

	return 0;
}