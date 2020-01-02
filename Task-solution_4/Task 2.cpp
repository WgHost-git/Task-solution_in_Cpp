#include <iostream>
using namespace std;

int main()
{
	int SIZE = 13;
	int *ptrFirmsProfitMonth = new int[SIZE];

	cout << "\tEnter salary." << endl; cout << endl;
	
	for (int i = 1; i < SIZE; i++)
	{
		switch (i)
		{
		case 1:
			cout << "Enter salary for 1 - January in USD: "; cin >> ptrFirmsProfitMonth[i];
			break;
		case 2:
			cout << "Enter salary for 2 - February in USD: "; cin >> ptrFirmsProfitMonth[i]; 
			break;
		case 3:
			cout << "Enter salary for 3 - March in USD: "; cin >> ptrFirmsProfitMonth[i];
			break;
		case 4:
		cout << "Enter salary for 4 - April in USD: "; cin >> ptrFirmsProfitMonth[i]; 		
			break;
		case 5:
			cout << "Enter salary for 5 - May in USD: "; cin >> ptrFirmsProfitMonth[i]; 		
			break;
		case 6:
			cout << "Enter salary for 6 - June in USD: "; cin >> ptrFirmsProfitMonth[i]; 
			break;
		case 7:
			cout << "Enter salary for 7 - July in USD: "; cin >> ptrFirmsProfitMonth[i]; 		
			break;
		case 8:
			cout << "Enter salary for 8 - August in USD: "; cin >> ptrFirmsProfitMonth[i]; 	
			break;
		case 9:
			cout << "Enter salary for 9 - September in USD: "; cin >> ptrFirmsProfitMonth[i]; 	
			break;
		case 10:
			cout << "Enter salary for 10 - October in USD: "; cin >> ptrFirmsProfitMonth[i]; 	
			break;
		case 11:
			cout << "Enter salary for 11 - November in USD: "; cin >> ptrFirmsProfitMonth[i]; 	
			break;
		case 12:
			cout << "Enter salary for 12 - December in USD: "; cin >> ptrFirmsProfitMonth[i]; 
			break;
		}
	}
	cout << endl;

	int minRange;
	int maxRange;

	do
	{
	cout << "\tEnter the salary search range from 1 to 12 month: " << endl; cout << endl;
	cout << "Min range: "; cin >> minRange;
	cout << "Max range: "; cin >> maxRange;

	if (13 > minRange > 0 && 13 > maxRange > 0)
	{
		break;
	}
	else
	{
		cout << "You have entered an invalid value! Please re-enter!";
	}

	} while (true);

	int min = ptrFirmsProfitMonth[minRange];
	int max = ptrFirmsProfitMonth[minRange];
	int minMonth = minRange;
	int maxMonth = minRange;
	
	for (int i = minRange; i < maxRange; i++)
	{
		if (min > ptrFirmsProfitMonth[i]) // определение минимального элемента
		{
			min = ptrFirmsProfitMonth[i];
			minMonth = i;
		}
		if (max < ptrFirmsProfitMonth[i]) // определение максимального элемента
		{
			max = ptrFirmsProfitMonth[i];
			maxMonth = i;
		}
	}

	cout << endl;
	cout << "\tMinimum and maximum salary in a given period from " << minRange << " to " << maxRange << " months." << endl; cout << endl;
	cout << "The minimum salary for month number " << minMonth << " is equal to: " << min << "$"; cout << endl; cout << endl;
	cout << "The maximum salary for month number " << maxMonth << " is equal to: " << max << "$";

	delete[] ptrFirmsProfitMonth;

	cout << endl; cout << endl;

	system("pause");
	return 0;
}

