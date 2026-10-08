#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
	const int SIZE = 5;
	const int LIVES = 3;
	// 0 = unguessed, 1 = mole, 2 = already-guessed empty cell
	int board[SIZE][SIZE] = {};

	srand(static_cast<unsigned int>(time(nullptr)));
	const int moleRow = rand() % SIZE;
	const int moleCol = rand() % SIZE;
	board[moleRow][moleCol] = 1;

	cout << "Whack-a-Mole! Find the mole on a " << SIZE << "x" << SIZE
		 << " board.\n";
	cout << "Enter row and column from 0 to " << SIZE - 1 << ".\n";

	int lives = LIVES;
	while (lives > 0) {
		int row, col;
		cout << "Lives: " << lives << " | Your guess (row column): ";
		if (!(cin >> row >> col)) {
			cout << "Invalid input. Game over.\n";
			return 0;
		}

		if (row < 0 || row >= SIZE || col < 0 || col >= SIZE) {
			cout << "Coordinates must be between 0 and " << SIZE - 1 << ".\n";
			continue;
		}

		if (board[row][col] == 2) {
			cout << "You already guessed that cell. Try another one.\n";
			continue;
		}

		if (board[row][col] == 1) {
			cout << "You hit the mole! You win!\n";
			return 0;
		}

		board[row][col] = 2;
		--lives;
		cout << "Miss!\n";
	}

	cout << "Game over! The mole was at row " << moleRow
		 << ", column " << moleCol << ".\n";
	return 0;
}
