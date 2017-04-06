/*******************************
**Thomas McIntosh
**May 21,2016
**CS_161 This is the class file used to play a Tic Tac Toe game, also contain main()
*******************************/



#include <iostream>
#include "TicTacToe.hpp"


using namespace std;
//Constructor that takes 'x' or 'o' as an argument for first player to determine first player
TicTacToe::TicTacToe(char firstMove)
{
	player = firstMove;
}

void TicTacToe::play()
{
	int status = newBoard.gameState();
	int xCoord, yCoord;

	do
	{
		cout << "Player " << static_cast<char>(toupper(player)) << " please enter your move. ";

		cin >> xCoord >> yCoord;
		//Check to see if move is valid
		if (newBoard.makeMove(xCoord, yCoord, player))
		{
			
			newBoard.makeMove(xCoord, yCoord, player);			//Record the move on the board
			
			newBoard.print();									//Print board state to screen
			
			status = newBoard.gameState();						//Update the progress of the game
			if (player == 'x')
			{
				player = 'o';
			}
			else player = 'x';
		}
		else
		{
			cout << "That square is already taken\n";
		}
	} while (status == UNFINISHED);
	if (status == X_WON)
	{
		cout << "Player X wins!\n";
	}
	else if (status == O_WON)
	{
		cout << "Player O wins!\n";
	}
	else if (status == DRAW)
	{
		cout << "Draw!\n";
	}
}

int main()
{
	char firstMove;

	cout << "Do you want x or o to go first?" << std::endl;
	cin >> firstMove;

	TicTacToe newGame(firstMove);
	newGame.play();
}