/*
	Коняхин Виталий Вячеславович

	Написать программу, вычисляющую, с какой скоростью бегун пробежал дистанцию. 
Рекомендуемый вид экрана во время выполнения программы приведен ниже: 
Вычисление скорости бега 
Введите длину дистанции (метров) = 1000 
Введите время (мин.сек) = 3.25 
Дистанция: 1000 м 
Время: 3 мин 25 сек = 205 сек 
Вы бежали со скоростью 17.56 км/ч 
*/

#include <iostream>
#include < math.h >   //Для modf, modff, modfl
#include <iomanip> // для сокращения вывода кол-ва знаков ___  setprecision(...) 
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	cout << "Программа, вычисляющая, с какой скоростью бегун пробежал дистанцию" << endl; cout << endl;

	char yesNo;

	double time, integerPart, fractionalPart, score, distance, seconds;
	const double coefficient = 3.6;

	do
	{
		yesNo = 'N';

		cout << "Введите длину дистанции (метров) = "; cin >> distance ; cout << endl; cout << endl;
		cout << "Введите время (мин.сек) = "; cin >> time ; cout << endl; cout << endl;
		cout << "Дистанция: " << distance << " м"; cout << endl; cout << endl;

		fractionalPart = modf(time, &integerPart);
		fractionalPart *= 100;
		seconds = (integerPart * 60) + fractionalPart;

		cout << "Время: " << integerPart << " мин " << fractionalPart << " секунд (ы) = " << seconds << " cек"; cout << endl; cout << endl;

		score = distance / seconds;
		score *= coefficient;

		cout << "Вы бежали со скоростью "  << setprecision(4) << score << " км/ч"; cout << endl; cout << endl;

		cout << "Введите 'Y' если хотите повторить ввод "; cin >> yesNo;

	} while (yesNo == 'Y' || yesNo == 'y');

	system("pause");
}