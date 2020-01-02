#include <iostream>
#include <ctime>
using namespace std;

typedef unsigned int uint; // переименование типа данных

void perfectNumber(uint& a, uint& b);

int main()
{
	setlocale(LC_ALL, "ru");
	cout << endl; cout << endl;

	uint a;
	uint b;

	cout << "\t\tПоиск совершенных чисел во введенном интервале" << endl << endl;
	cout << "\tВведите первое число: "; cin >> a; cout << endl;
	cout << "\tВведите второе чило: "; cin >> b; cout << endl;


	cout << "\tСовершенные сисла во введеном интервале: | ";
	perfectNumber(a,b);

	cout << endl; cout << endl;
	system("pause");
	return 0;
}

void perfectNumber(uint& a, uint& b) {

	for (uint i = a; i <= b; i++)
	{
		uint sum = 0;

		for (uint j = 1; j < i; j++) { // нахождение суммы сомножителей
			if (i % j == 0)
				sum += j;
		}
		
		if (sum == i) { //если число и сумма его сомножителей равны - значит число совершенное
			cout << sum << " | ";
		}
	}
}