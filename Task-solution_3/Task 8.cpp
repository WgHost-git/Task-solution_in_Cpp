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
