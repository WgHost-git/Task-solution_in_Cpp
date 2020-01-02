#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	//setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int x, y;

	cout << "Введите первое число 'x': "; cin >> x; cout << endl; 
	cout << "Введите первое число 'y': "; cin >> y; cout << endl; 

	cout << "Чисол 'x' в степени 'y' равно: " << pow(x, y) << endl; cout << endl;

	system("pause");
	return 0;
}
