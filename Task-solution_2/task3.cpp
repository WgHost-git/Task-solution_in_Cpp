#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int number;
	int maxNumber = 0;
	char yesNo = 'N';

	do
	{
		for (int i = 1; i <= 7; i++)
		{
			cout << "Введите чисело " << i<< ": ";
			cin >> number;
			if (maxNumber < number)
			{
				maxNumber = number;
			}
		}
		cout << endl;
		cout << "Максимальное число равно: " << maxNumber << endl; cout << endl;

		cout << "Веведите 'Y' если хотите повторить: "; cin >> yesNo; cout << endl;
	} while (yesNo == 'Y' || yesNo == 'y');

	system("pause");
}
