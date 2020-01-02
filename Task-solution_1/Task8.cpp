#include <iostream>
#include < math.h >   

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
