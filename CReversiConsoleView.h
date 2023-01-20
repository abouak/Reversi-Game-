

#ifndef CREVERSICONSOLEVIEW_H_
#define CREVERSICONSOLEVIEW_H_

/*
 * Description: it represents the board, it fill the board with some default stones it also prints it after an update
 */

class CReversiConsoleView

{
public:
/**
 * Constructor of the class
 */
	CReversiConsoleView();
/**
 * Desstructor of the class
 */
	~CReversiConsoleView();
	/**
	 * it prints the board and also files the board spaces with '.' so the players can recognize the empty spaces
	 *
	 * @ param m_board: it represents the board;
	 */
	void print(char m_board[]);
private:


};
#endif /* CREVERSICONSOLEVIEW_H_ */
