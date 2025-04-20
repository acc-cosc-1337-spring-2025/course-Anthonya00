#include <string>
#include <vector>
#include <iostream>
using std::string;
using std::vector;

using std::cout;


//cpp
#include "tic_tac_toe.h"



bool TicTacToe:: game_over(){

    if (check_colum_win() || check_row_win() || check_diagonal_win()){

        set_winner();

        return true;
    }

    else if(check_board_full()){

        return true;
    }

    
    return false;

}

void TicTacToe:: start_game(string first_player){

    winner = "none";
    X_or_O = first_player;
    TicTacToe:: clear_board();

}

void TicTacToe:: mark_board(int position){

    board[position-1] = X_or_O;
    TicTacToe:: set_X_or_O();

}



	
string TicTacToe:: get_winner(){

    return winner;

}
    

//private functions

void TicTacToe:: set_X_or_O(){

    if(X_or_O == "X") {
        
        X_or_O = "O";

    }
    else {
        
        X_or_O = "X";
    }    

}

bool TicTacToe:: check_board_full(){

    for (string& goku :board){

        if (goku == " "){

            return false;

        }
    }    
    return true;

}

void TicTacToe:: clear_board() {
    
    for (string& goku :board){

        goku = " ";

    }

}



void TicTacToe:: set_winner(){

    if ( X_or_O == "X"){

        winner = "O";
    }
    else {
        
        winner = "X";

    }
}
