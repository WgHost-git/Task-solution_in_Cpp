#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	const double PI = 3.14;
	int S, v, t, a;

	cout << "Программа вычесления пройденного расстояния при прямолинейном равноускоренном движении" << endl;
	cout << "Введите скорость v = : "; cin >> v; cout << endl;
	cout << "Введите время t = : "; cin >> t; cout << endl;
	cout << "Введите ускорение a = : "; cin >> a; cout << endl;

	S = v * t + (a * (t * t)) / 2;

	cout << "Значение пройденного расстояния при прямолинейном равноускоренном движении S = " << S << "км" << endl; cout << endl;
	
	system("pause");
}
