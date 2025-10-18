#include <iostream>
#include <iomanip>
using namespace std;

// PART I
// tasque 1
int main()
{
	srand(time(NULL));
	const int SIZE = 10;
	int arr[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 10;
	}

	cout << "Array elements: \n";
	for (int i = 0; i < SIZE; i++)
	{
		cout << setw(4) << arr[i];
	}

	int compressedArr[SIZE];
	int compressedIndex = 0;
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] != 0)
		{
			arr[compressedIndex] = arr[i];
			compressedIndex++;
		}
	}
	for (int i = compressedIndex; i < SIZE; i++)
	{
		arr[i] = -1;
	}


	cout << "\n\nFinal array elements: \n";
	for (int i = 0; i < SIZE; i++)
	{
		cout << setw(4) << arr[i];
	}

}

// tasque 2
#include <iostream>
#include <iomanip>
#define SIZE1 5
#define SIZE 10
using namespace std;

int main()
{
	srand(time(NULL));
	int resarray[SIZE];
	int arr1[SIZE1], arr2[SIZE1];

	for (int i = 0; i < SIZE1; i++)
	{
		arr1[i] = rand() % 21 - 10;
		arr2[i] = rand() % 21 - 10;
	}

	int resindex = 0;
	for (int i = 0; i < SIZE1; i++)
	{
		if (arr1[i] > 0)
		{
			resarray[resindex] = arr1[i];
			resindex++;
		}
		if (arr2[i] > 0)
		{
			resarray[resindex] = arr2[i];
			resindex++;
		}
	}

	for (int i = 0; i < SIZE1; i++)
	{
		if (arr1[i] == 0)
		{
			resarray[resindex] = arr1[i];
			resindex++;
		}
		if (arr2[i] == 0)
		{
			resarray[resindex] = arr2[i];
			resindex++;
		}
	}

	for (int i = 0; i < SIZE1; i++)
	{
		if (arr1[i] < 0)
		{
			resarray[resindex] = arr1[i];
			resindex++;
		}
		if (arr2[i] < 0)
		{
			resarray[resindex] = arr2[i];
			resindex++;
		}
	}

		cout << "Array 1: ";
		for (int i = 0; i < SIZE1; i++)
		{
			cout << setw(4) << arr1[i];
		}
		cout << "\nArray 2: ";
		for (int i = 0; i < SIZE1; i++)
		{
			cout << setw(4) << arr2[i];
		}
		cout << "\nResult Array (sorted): ";
		for (int i = 0; i < resindex; i++)
		{
			cout << setw(4) << resarray[i];
		}
	}
