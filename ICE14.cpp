/*
LUIZ FILHO
INTRODUCTION TO C++
ICE14
5/10/2018

Description:
Write a function named LegalMove, in class knight, which accepts a ROW and COL parameter for the
knight's current position, and a move number parameter (see table above) for the proposed new position.
The method should return true if the proposed move is legal, and false if not legal.  The method
should also pass reference parameters set by the method to the ROW and COL coordinates of the
destination square if the move is legal.

You will need at least the following variables:

<pre class="brush: cpp">
const int ROW = 8, COL = 8, MOVES = 8;
int row;
int col;
int board[ROW][COL];	//chess board
int offsets[MOVES][2];  //knight move offsets (delta values for row, col)
int countLegalMoves;	//number of legal moves from row, col
int moves[MOVES];		//legal move indices

Tour(int row=0, int col=0);
void ClearBoard();
int GetLegalMoves();
void Move(int move, int sequence); //for brute force
void ShowBoard();
</pre>

A function should initialize row and col to passed values, and should initialize the offsets array
to the array differences (+/- 1 or 2) for row and col for each of the 8 moves.
 () should fill the moves array with the move number (1-8) and each legal move that is
possible from row, col, and return the number of moves in the array (0-8) and store this value in
countLegalMoves.

Write some driver code in main that will place a knight at a given position, and test some possible
moves (including some off-the-board moves).

If you have time, code the ClearBoard and the ShowBoard methods as well.

It might be even more interesting to start on a full brute-force type Knight's Tour program.  I say
start on, becuase there is not enough time in a class period for even a fast programmer to complete
such a program.
*/


#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

bool LegalMove(int &r, int &c, int move) {
}

int main() {

	// Declarations
	const int ROWS = 8, COLS = 8, MOVES = 8;
	int row;
	int col;
	int board[ROWS][COLS];	//chess board
	int offsets[MOVES][2];  //knight move offsets (delta values for row, col)
	int countLegalMoves;	//number of legal moves from row, col
	int moves[MOVES];		//legal move indices
	
	for (int r = 0; r < ROWS; r++)
		for (int c = 0; c < COLS; c++)
			board[r][c] = 0;




	/*
	Tour(int row = 0, int col = 0);
	void ClearBoard();
	int GetLegalMoves();
	void Move(int move, int sequence); //for brute force
	void ShowBoard();
	*/





	system("pause");
	return 0;
}
/*

 RESULT OUTPUT



*/

/*

#include <iostream>
using namespace std;

const int ROW_COUNT = 8;
const int COL_COUNT = 8;
const int POSSIBLE_MOVES = 8;

int row_delta[POSSIBLE_MOVES] = { 5,5,4,4,1,1,2,2 };
int col_delta[POSSIBLE_MOVES] = { 4,2,5,1,4,2,5,1 };

int board[ROW_COUNT][COL_COUNT];

void print_board() {
	for (int i = 0; i < ROW_COUNT; i++) {
		for (int j = 0; j < COL_COUNT; j++) {
			if (board[i][j] < 10)
				cout << ' ';
			cout << board[i][j] << ' ';
		}
		cout << endl;
	}
	cin.get();
}

bool find_tour(int move_no, int current_row, int current_col) {
	// uncomment the following two lines for debugging:
	//cout << move_no << endl;
	//print_board();

	if (move_no == ROW_COUNT * COL_COUNT)
		return true;

	for (int move = 0; move < POSSIBLE_MOVES; move++) {
		int new_row = current_row + row_delta[move];
		int new_col = current_col + col_delta[move];

		if (new_row < 0 || new_row >= ROW_COUNT || new_col < 0 || new_col >= COL_COUNT)
			continue;

		if (board[new_row][new_col] != 0)
			continue;

		board[new_row][new_col] = move_no + 1;
		if (find_tour(move_no + 1, new_row, new_col))
			return true;
		board[new_row][new_col] = 0;
	}
	return false;
}

void solve(int init_row, int init_col) {
	for (int row = 0; row < ROW_COUNT; row++)
		for (int col = 0; col < COL_COUNT; col++)
			board[row][col] = 0;

	board[init_row][init_col] = 1;
	if (find_tour(1, init_row, init_col))
		print_board();
	else
		cout << "Failed to find a tour!\n";
}

int main() {
	solve(5, 4);
}

*/