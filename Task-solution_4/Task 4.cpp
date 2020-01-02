#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	const int SIZE1 = 10;
	const int SIZE2 = 5;

	int arr1[SIZE1];
	int arr2[SIZE2];
	int arr3[SIZE2];

	srand(time(0));
	
	for (int i = 0; i < SIZE1; i++)
	{
		arr1[i] = rand() % 50 - 25;
	}

	cout << "\tArray1" << endl; cout << "\t| ";

	for (int i = 0; i < SIZE1; i++)  // вывод массива1
	{
		cout << arr1[i] << " | ";
	}

	int count = 0;

	for (int i = 0; i < SIZE1; i++) // наполнение двух массивов из первого
	{
		if (i < SIZE2)
		{
			arr2[i] = arr1[i];
		}
		else
		{
			arr3[count] = arr1[i];
			count++;
		}

	}

	cout << endl; cout << endl;
	cout << "\tArray2" << endl; cout << "\t| ";

	for (int i = 0; i < SIZE2; i++)  // вывод массива2
	{
		cout << arr2[i] << " | ";
	}

	cout << endl; cout << endl;
	cout << "\t\t\t\t  Array3" << endl; cout << "\t\t\t\t  | ";

	for (int i = 0; i < SIZE2; i++)  // вывод массива2
	{
		cout << arr3[i] << " | ";
	}

	cout << endl;
	cout << endl;

	system("pause");
	return 0;
}


