#include <iostream>
using namespace std;

const int SIZE = 3;
int zp = 200;
int sales[SIZE];
int managerZp[SIZE];
int managerZpPrc;


int managerSalary(int a);
void zpMeneger();

int main()
{
	setlocale(LC_ALL, "rus");
	char yesNo = 'N';

	do
	{
		cout << "Вводит с клавиатуры уровень продаж для трех менеджеров в $" << endl; cout << endl;

		for (int i = 0; i < SIZE; i++)
		{
			cout << i + 1 << "й менеджер: "; cin >> sales[i]; cout << endl; 
		}

		zpMeneger();

		int max;

		for (int i = 0; i < SIZE; i++)
		{
			for (int j = 0; j < SIZE; j++)
			{
				if (managerZp[i] > managerZp[j])
				{
					max = i;
				}
			}

		}
		for (int i = 0; i < SIZE; i++)
		{
			if (i == max)
			{
				cout << i + 1 << "й менеджер получает бонус 200$ и его зарплата равна: " << managerZp[i] + 200 << "$" << endl; cout << endl;
			}
		}

		cout << "Веведите 'Y' если хотите повторить: "; cin >> yesNo; cout << endl;
	} while (yesNo == 'Y' || yesNo == 'y');

	system("pause");
}

// Зарплата менеджера

int managerSalary(int a)
{
	int temp;

	if (a <= 500)
	{
		temp = zp * 0.03;
		managerZpPrc = zp + temp;
		return managerZpPrc;
	}	
	else if (a > 500 && a <= 1000)
	{
		temp = zp * 0.05;
		managerZpPrc = zp + temp;
		return managerZpPrc;
	}	
	else if (a > 1000 )
	{
		temp = zp * 0.08;
		managerZpPrc = zp + temp;
		return managerZpPrc;
	}
}

// Зарплата менеджеров с процентами

void zpMeneger()
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Зарплата " << i + 1 << "ого менеджера: ";
		managerZp[i] = managerSalary(sales[i]);
		cout << managerZp[i] << "$" << endl; cout << endl;
	}
}