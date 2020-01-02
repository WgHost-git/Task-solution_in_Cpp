#include <iostream>
#include <ctime>
using namespace std;

typedef unsigned int uint; // переименование типа данных

uint sumBet(uint& a, uint& b);

int main()
{
	setlocale(LC_ALL, "ru");
	cout << endl; cout << endl;

	uint a;
	uint b;

	cout << "\t\tСумма чисел между введеными" << endl << endl;
	cout << "\tВведите первое число: "; cin >> a; cout << endl;
	cout << "\tВведите второе чило: "; cin >> b; cout << endl; 

	uint result = sumBet(a, b);

	cout << "\tРезультат суммы между введеными числами: " << result;

	cout << endl; cout << endl;
	system("pause");
	return 0;
}

uint sumBet(uint& a, uint& b) {

	uint res = 0;

	if (a == b)
	{
		cout << "\tЧисла равны!" << endl << endl;
			return 0;
	}
	else
	{
		for (uint i = a + 1; i < b; i++)
		{
			res += i;
		}
		return res;
	}
}