


#ifndef CPLAYER_H_
#define CPLAYER_H_

/**
 * Description: It represets the players of the game, player 1 and player 2, it also represents the turn
 * of each player and the pieces on the board as well as the rules and fliping actions for each piece
 * when a player puts a piece and the turn ends
 */
class CPlayer
{
public:
	CPlayer();
	/**
	 * Creates the stone each player puts on the board, each turn the player is asked where do it want to put the piece,
	 * which position on the board, if the position is already taken it ask the player to put it in another place, it prints
	 * the board again to see the piece, until the game ends which is when all the pieces in the game are set.\
	 *
	 * @ param pos: is the array of the board
	 */
	void placeStone(char pos []);
	/**
	 * Control the rules of the game, it flips the pieces for a piece to fliped it need to be between to equal pieces of the other player
	 * for example: X Y X becomes X X X, this can be done vertically, horizontally and diagonally, since its a fixed symmetrical board
	 * for the vertical position to be a space between pieces it needs +12 spaces of difference, for the horizontal position it needs +2
	 * spaces of difference and for the diagonal position it needs +14 spaces of diferences so the rule of X Y X can be valid
	 *
	 * @ param pos: is the array of the board
	 * @ param player: is the index of the pos array of the board
	 */
	void flip(char pos[], int player);
	void flipVertical(char pos[], int player);
	/**
	 * Control the rules of the game, it flips the pieces for a piece to fliped it need to be between to equal pieces of the other player
	 * for example: X Y X becomes X X X, this can be done vertically, horizontally and diagonally, since its a fixed symmetrical board
	 * for the vertical position to be a space between pieces it needs +12 spaces of difference, for the horizontal position it needs +2
	 * spaces of difference and for the diagonal position it needs +14 spaces of diferences so the rule of X Y X can be valid
	 *
	 * @ param pos: is the array of the board
	 * @ param player: is the index of the pos array of the board
	 */
	void flipDiagonal(char pos[], int player);
	/**
	 * Control the rules of the game, it flips the pieces for a piece to fliped it need to be between to equal pieces of the other player
	 * for example: X Y X becomes X X X, this can be done vertically, horizontally and diagonally, since its a fixed symmetrical board
	 * for the vertical position to be a space between pieces it needs +12 spaces of difference, for the horizontal position it needs +2
	 * spaces of difference and for the diagonal position it needs +14 spaces of diferences so the rule of X Y X can be valid
	 *
	 * @ param pos: is the array of the board
	 * @ param player: is the index of the pos array of the board
	 */
	void flipHorizontal(char pos[], int player);
	/**
	 * it prints the board after a piece is set by the player
	 *
	 * @ param pos: is the array of the board
	 *
	 */
	void update(char pos[]);

private:
	/**
	 * Creates the turn of each player so that when player 1 puts a piece now is the turn of player 2
	 */
	int turn;

};

#endif /* CPLAYER_H_ */
