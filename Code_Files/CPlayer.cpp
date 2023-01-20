
#include <iostream>
using namespace std;

#include "CPlayer.h"


CPlayer::CPlayer()
{
	turn=1;
}

void CPlayer::placeStone(char pos [])
{
	while (turn < 36)
	{
		int type;
		int player;

		if (type % 2 == 0)
		{
			type = 2;
		}
		else
		{
			type =1;
		}
		switch (type)
		{
		case 1:
			cout << "Player 2 turn: choose position and put Y:";
			cin >> player;
			if (pos[player]!='.')
			{
				cout<< "Move not permited choose another position";
				cin >> player;
				pos[player]='Y';
				cout << endl;
			}
			else
			{
				pos[player]='Y';
			}
			type++;
			flipVertical(pos,player);
			flipHorizontal(pos,player);
			flipDiagonal(pos,player);
			update(pos);
			turn++;
			break;
		case 2:
			cout << "Player 1 turn: choose position and put X:";
			cin >> player;
			if (pos[player]!='.')
			{
				cout<< "Move not permited choose another position";
				cin >> player;
				pos[player]='X';
				cout << endl;
			}
			else
			{
				pos[player]='X';
			}
			type++;
			flipVertical(pos,player);
			flipHorizontal(pos,player);
			flipDiagonal(pos,player);
			update(pos);
			turn++;
			break;
		}
	}

}

void CPlayer::flipDiagonal(char pos[], int player)
{
	if (pos[player] == pos[player + 14])
	{
		pos[(player + 7)] = pos[player];
	}
	else if (pos[player] == pos[player + 21])
	{
		pos[(player + 7)] = pos[player];
		pos[(player + 14)] = pos[player];
	}
	else if (pos[player] == pos[player + 28])
	{
		pos[(player + 7)] = pos[player];
		pos[(player + 14)] = pos[player];
		pos[(player + 21)] = pos[player];
	}
	else if (pos[player] == pos[player + 35])
	{
		pos[(player + 7)] = pos[player];
		pos[(player + 14)] = pos[player];
		pos[(player + 21)] = pos[player];
		pos[(player + 28)] = pos[player];
	}


	else if (pos[player] == pos[(abs(player - 14))])
	{
		pos[(abs(player - 7))] = pos[player];
	}
	else if (pos[player] == pos[(abs(player - 21))])
	{
		pos[(abs(player - 7))] = pos[player];
		pos[(abs(player -14))] = pos[player];
	}
	else if (pos[player] == pos[(abs(player - 28))])
	{
		pos[(abs(player - 7))] = pos[player];
		pos[(abs(player -14))] = pos[player];
		pos[(abs(player -21))] = pos[player];
	}
	else if (pos[player] == pos[(abs(player - 35))])
	{
		pos[(abs(player - 7))] = pos[player];
		pos[(abs(player -14))] = pos[player];
		pos[(abs(player -21))] = pos[player];
		pos[(abs(player -28))] = pos[player];
	}
}

void CPlayer::flipHorizontal(char pos[], int player)
{
	if (pos[player] == pos[player + 2])
	{
		pos[(player + 1)] = pos[player];
	}
	else if (pos[player] == pos[player + 3])
	{
		pos[(player + 1)] = pos[player];
		pos[(player + 2)] = pos[player];
	}
	else if (pos[player] == pos[player + 4])
	{
		pos[(player + 1)] = pos[player];
		pos[(player + 2)] = pos[player];
		pos[(player + 3)] = pos[player];
	}
	else if (pos[player] == pos[player + 5])
	{
		pos[(player + 1)] = pos[player];
		pos[(player + 2)] = pos[player];
		pos[(player + 3)] = pos[player];
		pos[(player + 4)] = pos[player];
	}


	else if (pos[player] == pos[(abs(player - 2))])
	{
		pos[(abs(player - 1))] = pos[player];
	}
	else if (pos[player] == pos[(abs(player - 3))])
	{
		pos[(abs(player - 1))] = pos[player];
		pos[(abs(player -2))] = pos[player];
	}
	else if (pos[player] == pos[(abs(player - 4))])
	{
		pos[(abs(player - 1))] = pos[player];
		pos[(abs(player -2))] = pos[player];
		pos[(abs(player -3))] = pos[player];
	}
	else if (pos[player] == pos[(abs(player - 5))])
	{
		pos[(abs(player - 1))] = pos[player];
		pos[(abs(player -2))] = pos[player];
		pos[(abs(player -3))] = pos[player];
		pos[(abs(player -4))] = pos[player];
	}
}

void CPlayer::update(char pos[])
{
	for (int i=0; i <6; i++ )
				{
					 for (int j=0; j<6;j++)
					 {
						int in = j + (i * 6);
						cout  <<"   " << in <<pos[in] << "   ";
					 }
					 cout <<  endl;
				}
}

void CPlayer::flipVertical(char pos[], int player)
{

	if (pos[player] == pos[player + 12])
	{
		pos[(player + 6)] = pos[player];
	}
	else if (pos[player] == pos[player + 24])
	{
		pos[(player + 6)] = pos[player];
		pos[(player + 12)] = pos[player];
	}
	else if (pos[player] == pos[player + 36])
	{
		pos[(player + 6)] = pos[player];
		pos[(player + 12)] = pos[player];
		pos[(player + 24)] = pos[player];
	}


	else if (pos[player] == pos[(abs(player - 12))])
	{
		pos[(abs(player - 6))] = pos[player];
	}
	else if (pos[player] == pos[(abs(player - 24))])
	{
		pos[(abs(player - 6))] = pos[player];
		pos[(abs(player -12))] = pos[player];
	}
	else if (pos[player] == pos[(abs(player - 36))])
	{
		pos[(abs(player - 6))] = pos[player];
		pos[(abs(player -12))] = pos[player];
		pos[(abs(player -24))] = pos[player];
	}
}











