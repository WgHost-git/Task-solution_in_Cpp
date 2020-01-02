#include<iostream>
#include <ctime>
using namespace std;

void DistributionFunction(int* ptrArr, int size);

int main()
{
	setlocale(LC_ALL, "rus");

	const int size = 20;

	cout << "Размерность массива: " << size;

	cout << endl << endl;

	cout << "Массив заполняется случайными числами от -100 до 100";
	cout << endl << endl;

	int arr1[size];

	srand(time(0));

	for (int i = 0; i < size; i++)
	{
		arr1[i] = rand() % 200 - 100;
	}

	cout << "\t| ";

	for (int i = 0; i < size; i++)
	{
		cout << arr1[i] << " | ";
	}

	int* ptrArr1 = arr1;

	DistributionFunction(ptrArr1,size);

	system("pause>null");
	return 0;
}

void DistributionFunction(int* ptrArr, int size)
{
	int* arr2 = new int[size];
	int* arr3 = new int[size];
	int* arr4 = new int[size];

	int a = 0;
	int b = 0;
	int c = 0;

	for (int i = 0; i < size; i++)
	{
		if (ptrArr[i] == 0)
		{
			arr2[a] = ptrArr[i];
			a++;
		}
		else if (ptrArr[i] < 0)
		{
			arr3[b] = ptrArr[i];
			b++;
		}
		else if (ptrArr[i] > 0)
		{
			arr4[c] = ptrArr[i];
			c++;
		}
	}

	cout << endl << endl;
	cout << "Вывод динамического массива c нулевыми элементами: ";
	cout << endl << endl;

	cout << "\t| ";

	for (int i = 0; i < a; i++)
	{
		cout << arr2[i] << " | ";
	}	
	
	cout << endl << endl;
	cout << "Вывод динамического массива с отрицательными элементами: ";
	cout << endl << endl;

	cout << "\t| ";

	for (int i = 0; i < b; i++)
	{
		cout << arr3[i] << " | ";
	}

	cout << endl << endl;
	cout << "Вывод динамического массива с положительнми элементами: ";
	cout << endl << endl;

	cout << "\t| ";

	for (int i = 0; i < c; i++)
	{
		cout << arr4[i] << " | ";
	}

	delete[] arr2;
	delete[] arr3;
	delete[] arr4;
}
