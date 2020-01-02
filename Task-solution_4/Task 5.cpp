#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	const int SIZE = 10;

	int arr1[SIZE];
	int arr2[SIZE];
	int arr3[SIZE];

	srand(time(0));

	for (int i = 0; i < SIZE; i++)
	{
		arr1[i] = rand() % 50 - 25;
	}	
	for (int i = 0; i < SIZE; i++)
	{
		arr2[i] = rand() % 50 - 25;
	}

	cout << "\tArray1" << endl; cout << "\t| ";

	for (int i = 0; i < SIZE; i++)  // вывод массива1
	{
		cout << arr1[i] << " | ";
	}	
	
	cout << endl; cout << endl;
	cout << "\tArray2" << endl; cout << "\t| ";

	for (int i = 0; i < SIZE; i++)  // вывод массива2
	{
		cout << arr2[i] << " | ";
	}

	for (int i = 0; i < SIZE; i++)
	{
		arr3[i] = arr1[i] + arr2[i];
	}
	
	cout << endl; cout << endl;
	cout << "\tArray3" << endl; cout << "\t| ";

	for (int i = 0; i < SIZE; i++)  // вывод массива3
	{
		cout << arr3[i] << " | ";
	}

	cout << endl; cout << endl;

	system("pause");
	return 0;
}
