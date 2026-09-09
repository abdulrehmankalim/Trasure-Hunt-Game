#include <iostream>
#include <string>
using namespace std;

bool IfTreasureFound(int row, int col, int value)       //function for if treasure is found
{
	int r = value / 10;
	int c = value % 10;
	return (r == row && c == col);
}

void ForNextPosition(int value, int& Nextrow, int& Nextcol)   //Function for next position
{
	Nextrow = value / 10;
	Nextcol = value % 10;
}

int main()
{
	int maze[5][5] =
	{
		{34,21,32,41,25},
		{14,42,43,14,31},
		{54,45,52,42,23},
		{33,15,51,31,35},
		{21,52,33,13,23}
	};

	bool visited[5][5] = { false };
	int row;
	int col;
	cout << "Maze Runner Treassure Hunt" << endl;

	while (true)       //while loop will stop when the co-ordinates will be right
	{
		cout << "\nEnterrow(1-5):";
		cin >> row;
		cout << "Entercolumn(1-5):";
		cin >> col;
		if (row < 1 || row > 5 || col < 1 || col > 5)
		{
			cout << "Invalid coordinates! Tryagain.\n";
			continue;
		}
		if (visited[row - 1][col - 1])
		{
			cout << "You already visited this cell!.\n";
			break;
		}
		visited[row - 1][col - 1] = true;
		int value = maze[row - 1][col - 1];
		cout << "Visited(" << row << "," << col << ")->" << value << endl;
		if (IfTreasureFound(row, col, value))
		{
			cout << "\nTreasurefoundat(" << row << "," << col << ")\n";
			break;
		}
		int nextRow; 
		int nextCol;
		ForNextPosition(value, nextRow, nextCol);
		cout << "Next clue suggests:(" << nextRow << "," << nextCol << ")\n";
	}
	return 0;
}