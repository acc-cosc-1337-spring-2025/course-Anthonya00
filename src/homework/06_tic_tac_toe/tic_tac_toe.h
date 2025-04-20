#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;

#ifndef tic_tac_toe
#define tic_tac_toe

class TicTacToe{
    public:
        
        bool game_over();
        void start_game(string first_player);
        void mark_board(int position);
        string get_player() const{return X_or_O;};
        virtual void display_board() const = 0;
        string get_winner();
        TicTacToe(size_t size) : board{size*size, " "} {}


    private:
        void set_X_or_O();
        bool check_board_full();
        void clear_board();
        string X_or_O;
        string winner = "none"; 
        void set_winner();

    protected:
        //things in this class or things that can extend the class can be used 
        vector<string> board{};
        virtual bool check_colum_win() = 0;
        virtual bool check_row_win() = 0;
        virtual bool check_diagonal_win() = 0;
};
#endif
