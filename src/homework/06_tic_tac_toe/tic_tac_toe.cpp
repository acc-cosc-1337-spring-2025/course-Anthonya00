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

void TicTacToe:: display_board() const{

    cout<<"\n";
    cout<<board[0]<<" | "<<board[1]<<" | "<<board[2]<<"\n";
    cout<<"---------\n";
    cout<<board[3]<<" | "<<board[4]<<" | "<<board[5]<<"\n";
    cout<<"---------\n";
    cout<<board[6]<<" | "<<board[7]<<" | "<<board[8]<<"\n";
    
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

bool TicTacToe:: check_colum_win(){

    if (board[0] == board[3] && board[0] == board[6] && board[0] != " "){

        return true;
    }
    if (board[1] == board[4] && board[1] == board[7] && board[1] != " "){

        return true;
    }
    if (board[2] == board[5] && board[2] == board[8] && board[2] != " "){

        return true;
    }
    return false;
}

bool TicTacToe:: check_row_win(){

    if (board[0] == board[1] && board[0] == board[2] && board[0] != " "){

        return true;
    }
    if (board[3] == board[4] && board[3] == board[5] && board[3] != " "){

        return true;
    }
    if (board[6] == board[7] && board[6] == board[8] && board[6] != " "){

        return true;
    }
    return false;
}

bool TicTacToe:: check_diagonal_win(){

    if (board[0] == board[4] && board[0] == board[8] && board[0] != " "){

        return true;
    }
    if (board[6] == board[4] && board[6] == board[2] && board[6] != " "){

        return true;
    }
    return false;
}    

void TicTacToe:: set_winner(){

    if ( X_or_O == "X"){

        winner = "O";
    }
    else {
        
        winner = "X";

    }
}
