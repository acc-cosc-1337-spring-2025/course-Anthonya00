//h
#include <iostream>
#include <string>
#include <vector>
#include "tic_tac_toe.h"
#include <memory>
using std::string;
using std::vector;
using std:: unique_ptr;

#ifndef tic_tac_toe_manager
#define tic_tac_toe_manager


class TicTacToeManager{
    public:
        void get_winner_total(int& o, int& w, int&t);
        void save_game(unique_ptr<TicTacToe> & game);
        void display();

    private: 
        vector<unique_ptr<TicTacToe>> games{};
        int x_win = 0;
        int o_win = 0;
        int ties = 0;
        void update_winner_count(string winner);
        



};
#endif