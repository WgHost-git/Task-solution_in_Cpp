#include <iostream>
using namespace std;

int change(int ch);

int main()
{
	setlocale(LC_ALL, "rus");

	cout << "\t\t Программа перемены цифр местами" << endl; cout << endl;

	int number, a, numberDigits, halfNumber1, halfNumber2;
	double resultChange1, resultChange2, result;
	char yesNo = 'N';

	do
	{
		cout << "Введите 4-х значное число: "; cin >> number; cout << endl;

		numberDigits = 1;
		a = number;

		while ((a /= 10) > 0) // Кол-во цифр в числе
		{
			numberDigits++;
		}
		if (numberDigits > 4 || numberDigits < 4) // Проверка введеного числа
		{
			cout << "Вы ввели не 4-х значное число. Повторите ввод" << endl;
			continue;
		}

		halfNumber1 = number / 100;
		halfNumber2 = number % 100;

		resultChange1 = change(halfNumber1);
		resultChange2 = change(halfNumber2);

		result = (resultChange1 + resultChange2 / 100) * 100;

		cout << "Результат: "  << result << endl; cout << endl;

		cout << "Веведите 'Y' если хотите повторить: "; cin >> yesNo; cout << endl;
	} while (yesNo == 'Y' || yesNo == 'y');

	system("pause");
}

int change(int ch)
{
	double temp1, temp2;
	double resultChange;

	temp1 = ch / 10;
	temp2 = ch % 10;

	resultChange = (temp2 + temp1 / 10) * 10;

	return resultChange;
}