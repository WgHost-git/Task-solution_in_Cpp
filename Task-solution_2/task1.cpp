#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	cout << "\t\t Игра счасливое число" << endl; cout << endl;
	cout << "Счастливым считается шестизначное число, у которого сумма первых 3 цифр равна сумме вторых трех цифр." << endl; cout << endl;

	int number, a, numberDigits, temp;
	char yesNo = 'N';
	int halfNumber1, halfNumber2, 
		sum1 = 0, 
		sum2 = 0;

	do
	{
		cout << "Введите 6-ти значное число: "; cin >> number; cout << endl;

		numberDigits = 1;
		a = number;

		while ((a /= 10) > 0) // Кол-во цифр в числе
		{
			numberDigits++;
		}
		if (numberDigits > 6 || numberDigits < 6) // Проверка введеного числа
		{
			cout << "Вы ввели не 6-ти значное число. Повторите ввод" << endl;
			continue;
		} 

		halfNumber1 = number / 1000;
		halfNumber2 = number % 1000;

		for (int i = 1; i <= numberDigits/2; i++) // Сумма 3х цифр правой части часла 
		{
			sum2 += halfNumber1 % 10;
			halfNumber1 /= 10;
		}
	
		for (int i = 1; i <= numberDigits/2; i++) // Сумма 3х цифр левой части часла
		{
			sum1 += halfNumber2 % 10;
			halfNumber2 /= 10;
		}

		if (sum1 == sum2)  // Вывод результата
		{
			cout << "\tВаше число СЧАСЛИВОЕ!" << endl; cout << endl;
		}
		else
		{
			cout << "\tВаше число НЕ СЧАСЛИВОЕ!" << endl; cout << endl;
		}

		cout << "Веведите 'Y' если хотите повторить игру счасливое число: "; cin >> yesNo; cout << endl;
	} while (yesNo == 'Y' || yesNo == 'y');

	system("pause");
}

