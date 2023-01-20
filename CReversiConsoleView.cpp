
#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

#include "CReversiConsoleView.h"


CReversiConsoleView::CReversiConsoleView()
{

}

CReversiConsoleView::~CReversiConsoleView()
{
}


void CReversiConsoleView::print(char m_board[])
{
	for (int i=0; i <6; i++ )
	{
		 for (int j=0; j<6;j++)
		 {
			int index = j + (i * 6);
			m_board[index]='.';
			m_board[14]='X';
			m_board[15]='Y';
			m_board[20]='Y';
			m_board[21]='X';
			cout  << index <<m_board[index] << "   ";

		 }
		 cout <<  endl;
	}
	cout << endl;
}


