//h
#include <iostream>
#include <string>
#include <vector>
#include "tic_tac_toe.h"
using std::string;
using std::vector;

#ifndef tic_tac_toe_manager
#define tic_tac_toe_manager


class TicTacToeManager{
    public:
        void get_winner_total(int& o, int& w, int&t);
        void save_game(TicTacToe b);


    private: 
        vector<TicTacToe> games{};
        int x_win = 0;
        int o_win = 0;
        int ties = 0;
        void update_winner_count(string winner);




};
#endif