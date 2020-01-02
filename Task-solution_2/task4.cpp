#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	cout << "\t\t Маршрут самалета" << endl; cout << endl;

	cout << "Емкость бака для топлива у самолета равна: 300л" << endl;
	cout << "Потребление топлива на 1 км в зависимостиот веса груза у самолета следующее :"
		<< "\n- до 500 кг : 1 литров / км"
		<< "\n- до 1000 кг : 4 литров / км"
		<< "\n- до 1500 кг : 7 литров / км"
		<< "\n- до 2000 кг : 9 литров / км"
		<< "\n- более 2000 кг – самолет не поднимает." << endl; cout << endl;

	char yesNo = 'N';
	int distanceAb, distanceAc, cargoWeight;
	int tankCapacity = 300;

	do
	{
		cout << "Введите расстояние в км между пунктами 'А' и 'С': "; cin >> distanceAc; cout << endl;
		cout << "Введите расстояние в км между пунктами 'А' и 'B': "; cin >> distanceAb; cout << endl;
		cout << "Введите вес груза: "; cin >> cargoWeight; cout << endl;

		// минимальное количество топлива необходимо для дозаправки самолету в пункте В

		int minRefueling, refuelingOst, refueling;
		int fuelConsumption, fuelConsumptionAc, fuelConsumptionAb;

		if (cargoWeight < 500)
		{
			fuelConsumption = 1; // Затраты литров на 1км.
		}
		else if (cargoWeight > 500 && cargoWeight < 1000)
		{
			fuelConsumption = 4; // Затраты литров на 1км.
		}
		else if (cargoWeight > 1000 && cargoWeight < 1500)
		{
			fuelConsumption = 7; // Затраты литров на 1км.
		}
		else if (cargoWeight > 1500 && cargoWeight < 200)
		{
			fuelConsumption = 9; // Затраты литров на 1км.
		}
		else
		{
			cout << "Более 2000 кг – самолет не поднимает" << endl; cout << endl;
			cout << "Веведите 'Y' если хотите повторить: "; cin >> yesNo; cout << endl;
			continue;
		}

		fuelConsumptionAc = distanceAc * fuelConsumption; // сколько требуется литров на все растояние
		fuelConsumptionAb = distanceAb * fuelConsumption; // сколько требуется литров от пункта А до пункта B

		if (fuelConsumptionAc < 300)
		{
			cout << "Дозаправка не требукется!" << endl; cout << endl;
		}
		else
		{
			refueling = tankCapacity - fuelConsumptionAb; // Остаток топлива от пункта A до пункта B
			minRefueling = (fuelConsumptionAc - fuelConsumptionAb) - refueling; // Сколько литров необходимо дозаправить

			if (fuelConsumptionAc > tankCapacity*2 || minRefueling > tankCapacity)
			{
				cout << "Полет невозможен по введенному маршруту" << endl; cout << endl;
			}
			else
			{
				cout << "Для дозаправки в пункте 'B' требуется: " << minRefueling << "л." << endl; cout << endl;
			}
		}

		cout << "Веведите 'Y' если хотите повторить: "; cin >> yesNo; cout << endl;
	} while (yesNo == 'Y' || yesNo == 'y');

	system("pause");
}