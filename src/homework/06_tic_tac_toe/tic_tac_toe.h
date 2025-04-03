#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;

class TicTacToe{
    public:
        vector<string> board{9, " "};
        bool game_over();
        void start_game(string first_player);
        void mark_board(int position);
        string get_player() const{return X_or_O;};
        void display_board() const;
        string get_winner();
    private:
        void set_X_or_O();
        bool check_board_full();
        void clear_board();
        string X_or_O;
        string winner = "none"; 
        bool check_colum_win();
        bool check_row_win();
        bool check_diagonal_win();
        void set_winner();
};

