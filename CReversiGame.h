

#ifndef CREVERSIGAME_H_
#define CREVERSIGAME_H_
#include "CReversiConsoleView.h"
#include "CPlayer.h"

/**
 * Description: it represents the complete game where the players and the board are located it also allocates the memory for all the other classes and objects
 */

class CReversiGame
{

public:
	/**
	 * Announces the start of the game and allocates the memory for the array of the board
	 */
	CReversiGame();
	/**
	 * Announces the end of the game and deletes the allocated memory for the array of the board
	 */
	~CReversiGame();
	/**
	 * It calls the functions of the CReversiConsoleView class that creates the board
	 */
	void createBoard();
	/**
	 * it calls the functions fo the CPlayer class that sets the pieces
	 */
	void playStone();
private:

	CReversiConsoleView m_game1;
	CPlayer m_player;
	/**
	 * Pointer to the board
	 */
	char* pointer;
	char board[64];

};

#endif /* CREVERSIGAME_H_ */
