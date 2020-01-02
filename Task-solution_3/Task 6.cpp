/*
	Коняхин Виталий Вячеславович

	Задание 3. Найти среднее арифметическое всех целых чисел от 1 до 1000.
*/

#include <iostream>
#include <windows.h>
using namespace std;


int main()
{
	//setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int x = 1, y = 1000;
	int summ = 0;
	int arithmeticMean;

	for (int i = x; i < y; i++)
	{
		summ += i;
	}

	arithmeticMean = summ / y;

	cout << "среднее арифметическое от 1 до 1000 равно: " << arithmeticMean << endl; cout << endl;

	system("pause");
	return 0;
}