/*******************************
**Thomas McIntosh
**May 25,2016
**CS_161 This is the header file class Tic Tac Toe that allows you to play a game of tic tac toe.
*******************************/



#ifndef TICTACTOE_HPP
#define TICTACTOE_HPP

#include "Board.hpp"

class TicTacToe
{
private:
	Board newBoard;
	char player;

public:
	TicTacToe(char player);
	void play();
};



#endif
