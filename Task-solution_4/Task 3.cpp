#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	int summNegativeValue = 0, productBetweenMinMax, productEvenElements, summBetweenMinMax;

	const int SIZE = 10;

	int arr[SIZE];

	srand(time(NULL));

	for (int i = 0; i < SIZE; i++) //  наполнение массива случайными числами
	{
		arr[i] = rand() % 50 - 25;
	}

										//////  Сумму отрицательных элементов.  //////
	cout << endl; cout << "\t| ";

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " | "; // вывод массива

		if (arr[i] < 0)
		{
			summNegativeValue += arr[i];
		}
	}

	cout << endl; cout << endl;
	cout << "The sum of negative elements is equal to: " << summNegativeValue << endl; cout << endl;
	
							//////  Произведение элементов, находящихся между min и max элементами. //////
	int minArr = arr[0]; 
	int maxArr = arr[0]; 
	int minElem = 0, maxElem = 0;

	for (int i = 0; i < SIZE; i++) // Нахождение минимального и максимального значения
	{
		if (minArr > arr[i])
		{
			minArr = arr[i];
			minElem = i;
		}
		if (maxArr < arr[i]) 
		{
			maxArr = arr[i];
			maxElem = i;
		}
	}
					 
	int begin, end;

	if (minElem < maxElem) // определение позиции минимального и максимального элемента
	{
		begin = minElem;
		end = maxElem;
	}
	else
	{
		begin = maxElem;
		end = minElem;
	}

	if (begin == end + 1) // нахождение произведения между между min и max элементами если таковые имеются.
	{
		cout << "There are no values between elements!" << endl;
	}
	else
	{
		productBetweenMinMax = arr[begin + 1];

		for (int i = begin + 2; i < end; i++)
		{
			productBetweenMinMax *= arr[i];
		}

		cout << "The product of elements between min and max elements is equal to: " << productBetweenMinMax << endl; cout << endl;
	}

									//////  Произведение элементов с четными номерами. //////

	productEvenElements = arr[0];

	for (int i = 0; i < SIZE; i += 2)
	{
		productEvenElements *= arr[i];	
	}

	cout << "The product of elements with even numbers is equal to: " << productEvenElements << endl; cout << endl;
	
							////// Сумму элементов, находящихся между первым и последним отрицательными элементами. //////

	int beginNegative;
	int endNegative;
	int summNegative;

	for (int i = 0; i < SIZE; i++) // Нахождение первого отрицательного элемента
	{
		if (arr[i] < 0)
		{
			beginNegative = i;
			break;
		}
	}

	for (int i = SIZE - 1; i >= 0; i--) // Нахождение ппоследнего отрицательного элемента
	{
		if (arr[i] < 0)
		{
			endNegative = i;
			break;
		}
	}

	if (beginNegative + 1 == endNegative) // Сумма элементов, находящихся между первым и последним отрицательными 
	{
		cout << "There are no values between elements!" << endl;
	}
	else
	{
		summNegative = arr[beginNegative + 1];

		for (int i = beginNegative + 2; i < endNegative; i++)
		{
			summNegative += arr[i];
		}
	}
	
	cout << "The sum of the elements between the first and last negative it is equal to: " << summNegative << endl;

	cout << endl;
	system("pause");
	return 0;
}
