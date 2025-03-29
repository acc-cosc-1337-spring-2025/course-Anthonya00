#include <string>
#include <vector>
#include <iostream>
using std::string;
using std::vector;

using std::cout;


//cpp
#include "tic_tac_toe.h"



bool TicTacToe:: game_over(){

    return TicTacToe:: check_board_full();

}

void TicTacToe:: start_game(string first_player){

    X_or_O = first_player;
    TicTacToe:: clear_board();

}

void TicTacToe:: mark_board(int position){

    board[position-1] = X_or_O;
    TicTacToe:: set_X_or_O();

}

void TicTacToe:: display_board() const{

    cout<<"\n";
    cout<<board[0]<<" | "<<board[1]<<" | "<<board[2]<<"\n";
    cout<<"---------\n";
    cout<<board[3]<<" | "<<board[4]<<" | "<<board[5]<<"\n";
    cout<<"---------\n";
    cout<<board[6]<<" | "<<board[7]<<" | "<<board[8]<<"\n";
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
    