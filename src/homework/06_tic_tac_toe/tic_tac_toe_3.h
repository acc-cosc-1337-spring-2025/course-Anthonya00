//h
#include <iostream>
#include <string>
#include <vector>
#include "tic_tac_toe.h"

using std::string;
using std::vector;

#ifndef tic_tac_toe_3
#define tic_tac_toe_3


class TicTacToe3 : public TicTacToe{

    

    public:
        
        TicTacToe3() : TicTacToe(3){}
        void display_board() const ;


    private:
    
        bool check_colum_win();
        bool check_row_win();
        bool check_diagonal_win();


    protected:


};











#endif