#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int   seconds;

	int  minutes, hours;
	char yesNo;
	int secondsOst, minutesOst;

	cout << "Программа перевода секунд в часы и минуты" << endl;

	do
	{
		yesNo = 'N';

		cout << "Введите время в секундах" << endl; cout << "Секунды =  "; cin >> seconds; cout << endl; 

		minutes = seconds / 60;
		secondsOst = seconds - (minutes * 60);

		hours = minutes / 60;
		minutesOst = minutes - (hours * 60);

		cout << seconds << " секунд это\t "<< hours << "час(а)(ов)\t "<< minutesOst << " минут(а)\t " << secondsOst << "секунд(а)"; cout << endl; cout << endl;
		cout << "Введите 'Y' если хотите повторить ввод "; cin >> yesNo;

	} while (yesNo == 'Y' || yesNo == 'y');
	
	system("pause");
}
