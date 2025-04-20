#include "tic_tac_toe_4.h"
#include <iostream>
using std:: cout;


bool TicTacToe4:: check_colum_win(){

    if (board[0] == board[4] && board[0] == board[8] &&  board[0] == board[12] && board[0] != " "){

        return true;
    }
    if (board[1] == board[5] && board[1] == board[9] && board[1] == board[13] && board[0] != " "){

        return true;
    }
    if (board[2] == board[6] && board[2] == board[9] && board[2] == board[10] && board[0] != " "){

        return true;
    }
    if (board[3] == board[7] && board[3] == board[11] && board[3] == board[15] && board[0] != " "){

        return true;
    }
    return false;
}

bool TicTacToe4::check_row_win(){
    if (board[0] == board[1] && board[0] == board[2] && board[0] == board[3] && board[0] != " "){
        return true;
    }else if(board[4] == board[5] && board[4] == board[6] && board[4] == board[7] && board[4] != " "){
        return true;
    }else if(board[8] == board[9] && board[8] == board[10] && board[8] == board[11] && board[8] != " "){
        return true;
    }else if(board[12] == board[13] && board[12] == board[14] && board[12] == board[15] && board[8] != " "){
        return true;
    }
    return false;
}

bool TicTacToe4::check_diagonal_win(){
    if (board[0] == board[5] && board[0] == board[10] && board[0] == board[15] && board[0] != " "){
        return true;
    }else if(board[3] == board[6] && board[3] == board[9] && board[3] == board[12] && board[3] != " "){
        return true;
    }
    return false;
}

void TicTacToe4::display_board() const{
    cout<<"\n";
    cout<<board[0]<<" | "<<board[1]<<" | "<<board[2]<<" | "<<board[3]<<"\n";
    cout<<"---------\n";
    cout<<board[4]<<" | "<<board[5]<<" | "<<board[6]<<" | "<<board[7]<<"\n";
    cout<<"---------\n";
    cout<<board[8]<<" | "<<board[9]<<" | "<<board[10]<<" | "<<board[11]<<"\n";
    cout<<"---------\n";
    cout<<board[12]<<" | "<<board[13]<<" | "<<board[14]<<" | "<<board[15]<<"\n";
}

/*
class function check_column_win
Win by column if and return true if (each column index)
0, 1,  2,  3 
4, 5,  6,  7 
8, 9, 10, 11 
12,13,14, 15 
else
false
*/




/*
class function check_row_win
Win by row if
0, 1,  2,  3 are equal
4, 5,  6,  7 are equal
8, 9, 10, 11 are equal 
12,13,14, 15 are equal
*/



/*
class function check_diagonal_win
Win diagonally
0, 1,  2,  3
4, 5,  6,  7
8, 9, 10, 11
12,13,14, 15

*/
