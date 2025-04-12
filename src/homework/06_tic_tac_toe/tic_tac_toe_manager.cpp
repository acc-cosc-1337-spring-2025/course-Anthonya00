//cpp
#include <string>
#include <vector>
#include <iostream>
using std::string;
using std::vector;
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"



void TicTacToeManager:: get_winner_total(int& x, int& o, int&t){
    
    x = x_win;
    
    o = o_win;

    t = ties;

}

void TicTacToeManager:: save_game(TicTacToe game){
    games.push_back(game);
    TicTacToeManager:: update_winner_count(game.get_winner());

}


void TicTacToeManager:: update_winner_count(string winner){

    if (winner == "X"){      
        x_win = x_win + 1;
    }
    else if (winner == "O"){
        o_win = o_win + 1;
    }
    else{
        ties = ties + 1; 
    }

}
