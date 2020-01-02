#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	const double PI = 3.14;
	double S, R, L;

	cout << "Программа вычесления радиуса и площади круга по заданной длине" << endl;
	cout << "Введите длинну окружности: " << endl; cin >> L; cout << endl;

	R = L / (2 * PI);
	S = PI * (R * R);

	cout << "Значение радиуса R = " << R << endl; cout << endl;
	cout << "Значение площади круга S = " << S << endl; cout << endl;

	system("pause");
}
