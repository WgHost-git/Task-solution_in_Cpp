/*
	Коняхин Виталий Вячеславович

	Написать программу, которая преобразует введенное пользователем количество 
дней в количество полных недель и оставшихся дней. Например, пользователь ввел 17 дней, 
программа должна вывести на экран 2 недели и 3 дня. 
*/

#include <iostream>
#include < math.h >   //Для modf, modff, modfl

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int   seconds;

	double weeks, days, fractionalPart, integerPart;
	int	daysOst;
	char yesNo;

	cout << "Программа перевода секунд в часы и минуты" << endl;

	do
	{
		yesNo = 'N';

		cout << "Введите кол -во дней: " ; cin >> days; cout << endl;

		weeks = days / 7;
		fractionalPart = modf(weeks, &integerPart);

		fractionalPart *= 10;
		daysOst = fractionalPart;

		cout << days << " дней это\t " << integerPart << " недель(и, я)\t "<< " и  " << daysOst << " день(дня, дней)"; cout << endl; cout << endl;
		cout << "Введите 'Y' если хотите повторить ввод "; cin >> yesNo;

	} while (yesNo == 'Y' || yesNo == 'y');

	system("pause");
}