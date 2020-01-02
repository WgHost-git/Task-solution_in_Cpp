#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	//setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a;

	cout << "Введите число до 500: "; cin >> a; cout << endl; cout << endl;

	int summ = 0;

	for (int i = a; i < 500; i++)
	{
		summ += i;
	}
	
	cout << "Сумма чисел между 'a' и '500' равна: " << summ << endl; cout << endl;
	system("pause");
	return 0;
}
