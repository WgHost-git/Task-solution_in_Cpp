#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	double R0, R1, R2 ,R3;

	cout << "Программа вычесления сопротивления цепи" << endl;
	cout << "Введите значение сопративления 1: " << endl; cin >> R1; cout << endl;
	cout << "Введите значение сопративления 2: " << endl; cin >> R2; cout << endl;
	cout << "Введите значение сопративления 3: " << endl; cin >> R3; cout << endl;

	 R0 = 1/(1 / R1 + 1 / R2 + 1 / R3);

	 cout << "Значение сопративления R0 = " << R0 << endl; cout << endl;

	system("pause");
}
