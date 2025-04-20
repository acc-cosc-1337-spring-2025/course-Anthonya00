//cpp
#include <string>
#include <vector>
#include <memory>
#include <iostream>
using std::string;
using std::move;
using std::vector;
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"



void TicTacToeManager:: get_winner_total(int& x, int& o, int&t){
    
    x = x_win;
    
    o = o_win;

    t = ties;

}

void TicTacToeManager:: save_game(unique_ptr<TicTacToe> & game){
    TicTacToeManager:: update_winner_count(game ->get_winner());
    games.push_back(move (game));

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
void TicTacToeManager:: display(){

    for (auto & goku: games ){

        goku ->display_board();
    }


}
