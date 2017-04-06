/*******************************
**Thomas McIntosh
**May 25,2016
**CS_161 This is the header file class Board that creates a Tic Tac Toe board
*******************************/



#ifndef BOARD_HPP
#define BOARD_HPP

enum gameState { X_WON, O_WON, DRAW, UNFINISHED };

class Board
{
private:
	char board[3][3];
	int turnNum;

public:
	//default constructor
	Board();
	int gameState();
	void print();
	bool makeMove(int xCoord, int yCoord, char player);

};
#endif // !
