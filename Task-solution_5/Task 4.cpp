#include <iostream>
#include <ctime>
using namespace std;

typedef unsigned int uint; // переименование типа данных

uint degree(uint& a, uint& b);

int main()
{
	setlocale(LC_ALL, "ru");
	cout << endl; cout << endl;

	uint a;
	uint b;

	cout << "\t\tВозведение числа в степень" << endl << endl;
	cout << "\tВведите число: "; cin >> a; cout << endl;
	cout << "\tВведите степень: "; cin >> b; cout << endl; cout << endl;

	uint resultDegree = degree(a, b);

	cout << "\tРезультат возведения в степень: " << resultDegree;

	cout << endl; cout << endl;
	system("pause");
	return 0;
}

uint degree(uint& a, uint& b) {
	return pow(a, b);
}