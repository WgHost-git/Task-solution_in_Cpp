#include<iostream>
#include <cmath>
using namespace std;

bool prostaeChislo(int num); 
int* proverca(int* arr, int size, int& count);

int main()
{
	setlocale(LC_ALL, "rus");

	int size;
	int count = 0;
	
	cout << "¬ведите размер массива: ";cin >> size;

	int* arr = new int[size];

	for (int i = 0; i < size; i++) 
	{
		cout << "¬ведите число " << i + 1 << ": "; cin >> arr[i];
	}
		
	cout << endl << endl;

	int* arr2 = proverca(arr, size, count);

	for (int j = 0; j < count; j++)
	{
		cout << arr2[j] << " | ";
	}

	delete [] arr;
	delete [] arr2;

	system("pause>null");
	return 0;
}

bool prostaeChislo(int num)
{
	{
		bool result = true;

		if ((num == 2) || (num == 3))
			result = true;
		else {
			for (int i = 2; i <= floor(sqrt(num)); ++i)
				if (num % i == 0)
				{
					result = false;
					break;
				}
		}
		return (result && (num != 1));
	}
}

int* proverca(int* arr, int size, int& count)
{
	for (int i = 0; i < size; ++i)
	{
		if (!prostaeChislo(arr[i])) { ++count; }
	}

	int* arr2 = new int[count];

	int j = 0;

	for (int i = 0; i < size; ++i)
	{
		if (!prostaeChislo(arr[i])) { arr2[j++] = arr[i]; }
	}

	return arr2;
}
