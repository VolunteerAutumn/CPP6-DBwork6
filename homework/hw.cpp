#include <iostream>
#include <cstdlib>
#include <iomanip>
#define COLS 5
#define ROWS 5
using namespace std;

// taskque 1
int main()
{
	int array[ROWS][COLS];
	int currnum = 0;
	cout << "Enter the starting number >>> ";
	cin >> currnum;
	array[0][0] = currnum;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (i == 0 && j == 0)
				continue;
			else if (j == 0)
				array[i][j] = array[i - 1][COLS - 1] * 2;
			else
				array[i][j] = array[i][j - 1] * 2;
		}
	}

	for (int i = 0; i < ROWS; i++)
	{
		cout << "[ ";
		for (int j = 0; j < COLS; j++)
		{
			cout << setw(8) << array[i][j] << ", ";
		}
		cout << "\b\b ]" << endl;
		cout << endl;
	}
}

// tasc 2
int main()
{
	int array[ROWS][COLS];
	int currnum = 0;
	cout << "Enter the starting number >>> ";
	cin >> currnum;
	array[0][0] = currnum;

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (i == 0 && j == 0)
				continue;
			else if (j == 0)
				array[i][j] = array[i - 1][COLS - 1] + 1;
			else
				array[i][j] = array[i][j - 1] + 1;
		}
	}

	for (int i = 0; i < ROWS; i++)
	{
		cout << "[ ";
		for (int j = 0; j < COLS; j++)
		{
			cout << setw(8) << array[i][j] << ", ";
		}
		cout << "\b\b ]" << endl;
		cout << endl;
	}
}

// task 3
int main() {
    srand(time(0));

    int rows, cols;
    cout << "Enter the amount of rows >>> ";
    cin >> rows;
    cout << "Enter the amount of columns >>> ";
    cin >> cols;

    int a[100][100];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            a[i][j] = rand() % 10;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    int k;
    string dir;
    cout << "\nEnter the amount of shifts >>> ";
    cin >> k;
    cout << "Direction (left/right/up/down): ";
    cin >> dir;

    k = k % ((dir == "left" || dir == "right") ? cols : rows);

    if (dir == "right") {
        for (int r = 0; r < rows; r++) {
            for (int t = 0; t < k; t++) {
                int last = a[r][cols - 1];
                for (int c = cols - 1; c > 0; c--)
                    a[r][c] = a[r][c - 1];
                a[r][0] = last;
            }
        }
    }
    else if (dir == "left") {
        for (int r = 0; r < rows; r++) {
            for (int t = 0; t < k; t++) {
                int first = a[r][0];
                for (int c = 0; c < cols - 1; c++)
                    a[r][c] = a[r][c + 1];
                a[r][cols - 1] = first;
            }
        }
    }
    else if (dir == "down") {
        for (int t = 0; t < k; t++) {
            for (int c = 0; c < cols; c++) {
                int last = a[rows - 1][c];
                for (int r = rows - 1; r > 0; r--)
                    a[r][c] = a[r - 1][c];
                a[0][c] = last;
            }
        }
    }
    else if (dir == "up") {
        for (int t = 0; t < k; t++) {
            for (int c = 0; c < cols; c++) {
                int first = a[0][c];
                for (int r = 0; r < rows - 1; r++)
                    a[r][c] = a[r + 1][c];
                a[rows - 1][c] = first;
            }
        }
    }
    else {
        cout << "WRONG FCKING DIRECTION" << endl;
        return 0;
    }

    cout << "\nResuuuuuult:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }

	cout << "also I lost so much time on ts so pls spare me lol QwQ" << endl;
}
