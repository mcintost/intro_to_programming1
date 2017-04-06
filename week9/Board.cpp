/*******************************
**Thomas McIntosh
**May 21,2016
**CS_161 This is the class file to create a Tic Tac Toe Board
*******************************/



#include <iostream>
#include "Board.hpp"

using namespace std;

//Starts the board with . for all spaces
Board::Board()
{
	turnNum = 0;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			board[i][j] = '.';
}

bool Board::makeMove(int x, int y, char player)
{
	if (board[x][y] == '.')
	{
		board[x][y] = player;
		return true;
	}
	else return false;
}

int Board::gameState()									//Logic for win conditions, draw, or whether game is unfinished
{

	turnNum++;
	char winner = '.';

	//Checks for any win conditions to draw conditions
	if ((board[0][0] == 'x' || board[0][0] == 'o') && (board[0][0] == board[0][1]) && (board[0][0] == board[0][2]))
	{
		winner = board[0][0];
	}
	else if ((board[0][0] == 'x' || board[0][0] == 'o') && (board[0][0] == board[1][0]) && (board[0][0] == board[2][0]))
	{
		winner = board[0][0];
	}
	else if ((board[0][0] == 'x' || board[0][0] == 'o') && (board[0][0] == board[1][1]) && (board[0][0] == board[2][2]))
	{
		winner = board[0][0];
	}
	else if ((board[0][1] == 'x' || board[0][1] == 'o') && (board[0][1] == board[1][1]) && (board[0][1] == board[2][1]))
	{
		winner = board[0][1];
	}
	else if ((board[0][2] == 'x' || board[0][2] == 'o') && (board[0][2] == board[1][2]) && (board[0][2] == board[2][2]))
	{
		winner = board[0][2];
	}
	else if ((board[1][0] == 'x' || board[1][0] == 'o') && (board[1][0] == board[1][1]) && (board[1][0] == board[1][2]))
	{
		winner = board[1][0];
	}
	else if ((board[2][0] == 'x' || board[2][0] == 'o') && (board[2][0] == board[2][1]) && (board[2][0] == board[2][2]))
	{
		winner = board[2][0];
	}
	else if ((board[2][2] == 'x' || board[2][2] == 'o') && (board[2][2] == board[1][1]) && (board[2][2] == board[0][2]))
	{
		winner = board[2][2];
	}
	if (turnNum == 10)
	{
		return DRAW;
	}
	if (winner == 'x')
	{
		return X_WON;
	}
	else if (winner == 'o')
	{
		return O_WON;
	}
	else return UNFINISHED;

}


void Board::print()
{
	cout << "  " << endl;
	for (int h = 0; h < 3; h++)
	{
		cout << "   " << h;
	};
	cout << endl;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
		{
			if (j == 0)
			{
				cout << i << "  ";
			};
			cout << board[i][j] << "   ";
			if (j == 2)
			{
				cout << endl;
			}

		}

}