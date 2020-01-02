#include <iostream>
using namespace std;

int year, month, day, numberDigit;
int date1[3],
	dayPerYear,
	date2[3];
const int leapYearSIZE = 505;
int leapYear[leapYearSIZE];
int MonthYear[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int a, restDay, restDay1, restDay2, restYears, 
	leapBetweenDates, BetweenDates, numberYearsBetweenDates;
int numberBetweenDates;

int NumDigit(int year);
void date(int arr[3]);
void leapYearCheck(int d);
int restDays(int day[3]);
void result();

int main()
{
	setlocale(LC_ALL, "rus");

	cout << " Введите две даты (день, месяц, год в виде целых чисел)" << endl; cout << endl;

	char yesNo = 'N';

	do
	{		
		cout << "Введите первую дату" << endl;
		date(date1); // Функция ввода первой даты
		cout << endl;
			
		cout << "Введите вторую дату" << endl;
		date(date2); // Функция ввода второй даты
		cout << endl;
			
		cout << "Первый год ";
		leapYearCheck(date1[0]);
		cout << endl;
		restDay1 = restDays(date1);
		
		cout << "Второй год ";
		leapYearCheck(date2[0]);
		cout << endl;
		restDay2 = restDays(date1);
	
		result();
		
		cout << "Веведите 'Y' если хотите повторить: "; cin >> yesNo; cout << endl;

	} while (yesNo == 'Y' || yesNo == 'y');

	system("pause");
}

// функция ввода дат

void date(int arr[3])
{
	do
	{
		cout << "Введите год: "; cin >> year;
		cout << "Введите месяц: "; cin >> month;
		cout << "Введите день: "; cin >> day;

		arr[0] = year;
		arr[1] = month;
		arr[2] = day;

		numberDigit = 0;
		numberDigit = NumDigit(year);

		if (numberDigit < 1 || numberDigit > 5)
		{
			cout << "Введеный год вне рамок. Введите год от 1г до 2019г" << endl;
			continue;
		}
		if (month < 1 || month > 12 || day < 1 || day > 31)
		{
			cout << "Повторите ввод. Такого месяца или дня в году нет" << endl;
			continue;
		}
	} while (month < 1 || month > 12 || day < 1 || day > 31);
}

// Функция подсчета из скольких циф состоит введеный год для проверки

int NumDigit(int year)
{
	int num = 1;

	while ((year /= 10) > 0) // Кол-во цифр в числе
	{
		num++;
	}
	return num;
}

// Функция определения высокосного года

void leapYearCheck(int d)
{

	if (d % 4 == 0)
	{
		dayPerYear = 366;
		cout << " високосный" << endl;
	}
	else
	{
		dayPerYear = 365;
		cout << " не високосный" << endl;
	}
	
}

// Функция расчета остатка дней в месяце

int restDays(int day[3])
{
	if (dayPerYear == 366)
	{
		a = day[1] - 1;

		cout << "Дней в " << day[1] << "ом месяце: " << MonthYear[a] << endl;

		restDay = MonthYear[a] - day[2]; // Остаток дней в месяце

		cout << "Остаток дней в этом месяце: " << restDay << endl; cout << endl;

		return restDay;
	}
	else
	{
		MonthYear[1] = 28;

		a = day[1] - 1;

		cout << "Дней в " << day[1] << " месяце: " << MonthYear[a] << endl;

		restDay = MonthYear[a] - day[2]; // Остаток дней в месяце

		cout << "Остаток дней в этом месяце: " << restDay << endl; cout << endl;

		return restDay;
	}
}

void result()
{
	if (date1[0] > date2[0])
	{
		numberYearsBetweenDates = date1[0] - date2[0]; // Количесво лет между датами

		for (int i = 0; i < numberYearsBetweenDates; i++)
		{
			if (i % 4 == 0)
			{
				leapBetweenDates++; // Количесво високосных дней между датами
			}
		}

		BetweenDates = numberYearsBetweenDates - leapBetweenDates; // кол-во не високосных дней между датами

		numberBetweenDates = BetweenDates * 365 + leapBetweenDates * 366 + restDay1 + restDay2;

		cout << "Количество дней между этими двумя датами: " << numberBetweenDates << endl; cout << endl;
	}
	else
	{
		numberYearsBetweenDates = date1[0] - date2[0]; // Количесво лет между датами

		for (int i = 0; i < numberYearsBetweenDates; i++)
		{
			if (i % 4 == 00)
			{
				leapBetweenDates++; // Количесво високосных дней между датами
			}
		}

		BetweenDates = numberYearsBetweenDates - leapBetweenDates;

		numberBetweenDates = BetweenDates * 365 + leapBetweenDates * 366 + restDay1 + restDay2;

		cout << "Количество дней между этими двумя датами: " << numberBetweenDates << endl; cout << endl;
	}
}