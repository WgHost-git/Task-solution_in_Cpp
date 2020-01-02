#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int min, max;
	const int SIZE = 10;
	int arr[SIZE];

	srand(time(NULL)); // Для получения тек. состояния времени.

	cout << endl;
	cout << endl;
	cout << "Array output: ";

	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 50; // Заполнение массива случайными числами

		cout << arr[i] << " | "; 
	}

	min = arr[0]; // присвоение первого элемента массива
	max = arr[0]; // присвоение первого элемента массива

	for (int i = 1; i < SIZE; i++) 
	{
		if (min > arr[i]) // определение минимального элемента
		{min = arr[i];}
		if (max < arr[i]) // определение максимального элемента
		{max = arr[i];}
	}
	cout << endl;
	cout << endl;
	
	cout << "MIN number array: " << min << endl; // вывод минимального элемента
	cout << "MAX number array: " << max; // вывод максимального элемента

	cout << endl;
	cout << endl;

	system("pause");
	return 0;
}