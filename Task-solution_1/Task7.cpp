#include <iostream>
#include < math.h >   //Для modf, modff, modfl
#include <iomanip> // для сокращения вывода кол-ва знаков ___  setprecision(...) 
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	cout << "Программа, вычисления денежной суммы на которую был произведен звонок" << endl; cout << endl;
	char yesNo;

	double minutes, seconds, price, priceTalk;

	do
	{
		cout << "Введите стоимость одной минуты разговора в рублях: "; cin >> price; cout << endl;
		cout << "Введите продолжительность разговора" << endl;
		cout << "ВВедите минуты: "; cin >> minutes; 
		cout << "ВВедите секунды: "; cin >> seconds; cout << endl;

		priceTalk = (minutes + (seconds / 100)) * price;

		cout << "Стоимость " << minutes << " минут(ы) и " << seconds << " секунд разговора равна: " << priceTalk << "рублей " << endl;

		cout << "Введите 'Y' если хотите повторить ввод "; cin >> yesNo;

	} while (yesNo == 'Y' || yesNo == 'y');

	system("pause");
}
