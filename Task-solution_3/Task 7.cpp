#include <iostream>
#include <windows.h>
using namespace std;


int main()
{
	//setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a;

	cout << "Введите число до 20: "; cin >> a; cout << endl; cout << endl;

	int productNumbers = 1;

	for (int i = a; i < 20; i++)
	{
		productNumbers *= i;
	}

	cout << "Произведение чисел между 'a' и '20' равна: " << productNumbers << endl; cout << endl;

	system("pause");
	return 0;
}
