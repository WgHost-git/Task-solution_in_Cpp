/*
	Коняхин Виталий Вячеславович

	Задание 5. Написать программу, которая выводит на экран таблицу умножения на k, где k –
	номер варианта. Например, для 7-го варианта:
	7 x 2 = 14
	7 x 3 = 21
*/

#include <iostream>
#include <windows.h>
using namespace std;


int main()
{
	//setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int k;
	int tab;

	cout << "Введите чило для которого будет выводиться таблица умножения: "; cin >> k; cout << endl; cout << endl;

	for (size_t i = 1; i <= 10; i++)
	{
		tab = k * i;
		cout << k << " * " << i << " = " << tab << endl;
	}
	system("pause");
	return 0;
}