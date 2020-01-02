/*
	Коняхин Виталий Вячеславович

	Задание 3. 
		Вася работает программистом и получает 50$ за каждые 100 строк кода. За каждое
	третье опоздание Васю штрафуют на 20$. Реализовать меню:
	- пользователь вводит желаемый доход Васи и количество опозданий, посчитать, сколько строк
	кода ему надо написать
	- пользователь вводит количество строк кода, написанное Васей и желаемый объем зарплаты.
	Посчитать, сколько раз Вася может опоздать
	- пользователь вводит количество строк кода и количество опозданий, определить, сколько
	денег заплатят Васе и заплатят ли вообще.
*/

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	//setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char yesNo = 'N';
	int income, tardies, lineCode, choice, manyLines, howManyLines, penaltyTardiness, howManyTardiness, penaltyLineCode, zpPlus, zp;
	int oneHundredLines = 50;

	do
	{
		cout << "Введите желаемый доход Васи в $: "; cin >> income; cout << endl;
		cout << "Введите количество опозданий Васи: "; cin >> tardies; cout << endl;
		cout << "Введите количество строк кода Васи: "; cin >> lineCode; cout << endl;

		penaltyTardiness = (tardies / 3) * 20; // Расчет штрафа за опоздания
		penaltyLineCode = penaltyTardiness/0.5; // Расчет вычета строк за опоздания
		zp = lineCode/100 * 50; // Зарплата 

		do
		{
			cout << "\t\tМЕНЮ" << endl; cout << endl;
			cout << "\t1) Сколько строк кода Васе надо написать, чтобы получить желаемую зарплату?" << endl;
			cout << "\t2) Вывести на экран сколько раз Вася может опоздать чтобы получить желаемую зарплату." << endl;
			cout << "\t3) Вывести на экран сколько денег заплатят Васе и заплатят ли вообще с учетом написанных строк и пропусков." << endl; cout << endl;

			cout << "Введите ваш выбор: "; cin >> choice; cout << endl;

			if (choice < 1 || choice > 3)
			{
				cout << "Вы ввели не существующий пункт меню. Повторите выбор.";
				continue;
			}
		} while (choice < 1 || choice > 3);

		if (choice == 1)
		{
			manyLines = (income / oneHundredLines) * 100;
			
			if (manyLines > lineCode - penaltyLineCode)
			{
				howManyLines = (((income / oneHundredLines) * 100) - lineCode) + penaltyLineCode;

				cout << "Васе чтобы заработать " << income << "$ необходимо еще написать " << howManyLines << " строк кода." << endl; cout << endl;
			}
			else if (manyLines < lineCode - penaltyLineCode)
			{
				howManyLines = ((lineCode - (income / oneHundredLines) * 100)) - penaltyLineCode;

				zpPlus = (howManyLines / 100) * 50;

				cout << "Вася написла на " << howManyLines << " строк больше. Поэтому зарплата будет больше желаемой на " << zp << "$.";
			}
			else if (zp < penaltyTardiness)
			{
				cout << "Вася не получит зарплату с учетом такого количества пропусков и написанных строк";
			}
		}		
		else if (choice == 2)
		{		
			if (zp < penaltyTardiness)
			{
				cout << "Вася не получит зарплату с учетом такого количества пропусков и написанных строк";
			}
			else if (zp - penaltyTardiness < income && zp > penaltyTardiness)
			{
				howManyLines = (((income / oneHundredLines) * 100) - lineCode) + penaltyLineCode;

				cout << "Васе чтобы заработать " 
					 << income << "$ необходимо написать " 
					 << howManyLines << " строк кода и опоздать не более 2х раз." 
					 << endl; cout << endl;
			}
			else if (zp == income && zp > penaltyTardiness)
			{
				cout << "Васе чтобы заработать "
					<< income << "$ нельзя опоздать более 2х раз."
					<< endl; cout << endl;
			}
			else if (zp > income && zp > penaltyTardiness)
			{
				howManyTardiness = (((zp - income) / 20) * 3) - tardies;

				cout << "Вася может опоздать " << howManyTardiness << " раз чтобы получить желаемую зарплату.";
			}
		}
		else if (choice == 3)
		{
			if (zp < penaltyTardiness)
			{
				cout << "Вася не получит зарплату с учетом такого количества пропусков и написанных строк";
			}
			else 
			{
				zp = (lineCode / 100 * 50) - penaltyTardiness;

				cout << "Вася заработал " << zp << "$." << endl;
			}
		}
		
		cout << endl; cout << endl;
		cout << "Если хотите повторить введите 'Y' :"; cin >> yesNo; cout << endl;

		system("cls");

	} while (yesNo == 'Y' || yesNo == 'y');

	system("pause");
	return 0;
}



