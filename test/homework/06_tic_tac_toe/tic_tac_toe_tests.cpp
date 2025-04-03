#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test if the board is full"){

	TicTacToe game;
	
	game.start_game("X");
    game.mark_board(3);
    REQUIRE(game.game_over() == false);
    game.mark_board(2);
    REQUIRE(game.game_over() == false);
    game.mark_board(4);
    REQUIRE(game.game_over() == false);
    game.mark_board(1);
    REQUIRE(game.game_over() == false);
    game.mark_board(5);
    REQUIRE(game.game_over() == false);
    game.mark_board(6);
    REQUIRE(game.game_over() == false);
    game.mark_board(8);
    REQUIRE(game.game_over() == false);
    game.mark_board(7);
    REQUIRE(game.game_over() == false);
    game.mark_board(9);
	REQUIRE(game.game_over() == true);
	REQUIRE(game.get_winner() == "none");

}

TEST_CASE("Test first player set to X"){
	
	TicTacToe game;

	game.start_game("X");
	REQUIRE(game.get_player() == "X" );
}

TEST_CASE("Test first player set to O"){
	
	TicTacToe game;

	game.start_game("O");
	REQUIRE(game.get_player() == "O" );
}

TEST_CASE("Test win by first column"){
	
	TicTacToe game;

	game.start_game("O");
	game.mark_board(1);
	game.mark_board(3);
	game.mark_board(4);
	game.mark_board(5);
	game.mark_board(7);
	
	REQUIRE(game.game_over() == true );
	REQUIRE(game.get_winner() == "O");
}

TEST_CASE("Test win by second column"){
	
	TicTacToe game;

	game.start_game("O");
	game.mark_board(2);
	game.mark_board(1);
	game.mark_board(5);
	game.mark_board(3);
	game.mark_board(8);
	
	REQUIRE(game.game_over() == true );
	REQUIRE(game.get_winner() == "O");
}

TEST_CASE("Test win by third column "){
	
	TicTacToe game;

	game.start_game("O");
	game.mark_board(3);
	game.mark_board(4);
	game.mark_board(6);
	game.mark_board(7);
	game.mark_board(9);
	
	REQUIRE(game.game_over() == true );
	REQUIRE(game.get_winner() == "O");
}

TEST_CASE("Test win by first row  "){
	
	TicTacToe game;

	game.start_game("O");
	game.mark_board(1);
	game.mark_board(4);
	game.mark_board(2);
	game.mark_board(5);
	game.mark_board(3);
	
	REQUIRE(game.game_over() == true );
	REQUIRE(game.get_winner() == "O");
}

TEST_CASE("Test win by second row  "){
	
	TicTacToe game;

	game.start_game("O");
	game.mark_board(4);
	game.mark_board(1);
	game.mark_board(5);
	game.mark_board(2);
	game.mark_board(6);
	
	REQUIRE(game.game_over() == true );
	REQUIRE(game.get_winner() == "O");
}

TEST_CASE("Test win by third row "){
	
	TicTacToe game;

	game.start_game("O");
	game.mark_board(7);
	game.mark_board(1);
	game.mark_board(8);
	game.mark_board(3);
	game.mark_board(9);
	
	REQUIRE(game.game_over() == true );
	REQUIRE(game.get_winner() == "O");
}

TEST_CASE("Test win diagonally from top left "){
	
	TicTacToe game;

	game.start_game("O");
	game.mark_board(1);
	game.mark_board(3);
	game.mark_board(5);
	game.mark_board(7);
	game.mark_board(9);
	
	REQUIRE(game.game_over() == true );
	REQUIRE(game.get_winner() == "O");
}

TEST_CASE("Test win diagonally from bottom left "){
	
	TicTacToe game;

	game.start_game("O");
	game.mark_board(7);
	game.mark_board(1);
	game.mark_board(5);
	game.mark_board(2);
	game.mark_board(3);
	
	REQUIRE(game.game_over() == true );
	REQUIRE(game.get_winner() == "O");
}