

#include <iostream>
using namespace std;

#include "CReversiGame.h"

CReversiGame::CReversiGame()
{
	pointer = new char[64];
	board[64]={ 0 };
	cout << "ReversiGame has started :" << endl << endl;
	cout << "Player 1 uses X" << endl << "Player 2 uses Y" << endl << endl;
}

CReversiGame::~CReversiGame()
{

	cout << endl<<"Game has ended.";
	delete [] pointer;
}


void CReversiGame::createBoard()
{
	m_game1.print(pointer);
}


void CReversiGame::playStone()
{
	m_player.placeStone(pointer);
}
