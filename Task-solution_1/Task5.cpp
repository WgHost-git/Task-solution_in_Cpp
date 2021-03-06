#include <iostream>
#include < math.h >   
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	char yesNo;

	double number, fractionalPart, integerPart;

	cout << "Программа преобразования дробного значения к денежному виду" << endl;

	do
	{
		yesNo = 'N';

		cout << "Введите дробное число: "; cin >> number; cout << endl;

		fractionalPart = modf( number,  &integerPart);

		//cout << "Целая часть = " << integerPart << endl;
		//cout << "Дробная часть = " << fractionalPart << endl;

		fractionalPart *= 100;

		cout << "Дробное число " << number << " в денежной форме будет выглядит следующим образом: " << endl; cout << endl;

		cout << " \t" << integerPart  << " рублей" << " | " << fractionalPart << " копеек (клпейки)" << endl; cout << endl;

		cout << "Введите 'Y' если хотите повторить ввод "; cin >> yesNo;

	} while (yesNo == 'Y' || yesNo == 'y');

	system("pause");
}
