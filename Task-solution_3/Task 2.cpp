#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	//setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char yesNo = 'N';
	int price, choice, min, costCall;

	cout << "Введите стоимость 1ой минуты разговора:  "; cin >> price; cout << endl;
	cout << "Введите кол-во минут разговора:  "; cin >> min; cout << endl;

	do
	{	
		cout << "Выберете оператора с какого на какой звонить:" << endl; cout << endl;

		cout << "\t1. tele2 -> tele2" << endl;
		cout << "\t2. tele2 -> MTS" << endl;
		cout << "\t3. tele2 -> Megafon" << endl;
		cout << "\t4. MTS -> tele2" << endl;
		cout << "\t5. Megafon -> tele2" << endl;
		cout << "\t6. Megafon -> Megafon" << endl;
		cout << "\t7. MTS -> MTS" << endl;

		cin >> choice;

		if (choice < 1 || choice > 7) 
		{
			cout << "Вы выбрали не существующий вариант. Повторите выбор." << endl;
			continue;
		}
		else
		{
			costCall = price * min;
			cout << "стоимость разговора: " << costCall << "p" << endl; cout << endl;
		}
		
		cout << "Если хотите повторить введите 'Y' :"; cin >> yesNo; cout << endl;

		system("cls");

	} while (yesNo == 'Y' || yesNo == 'y');

	system("pause");
	return 0;
}
