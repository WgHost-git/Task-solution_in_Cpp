#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	//setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char symbol;
	std::cout << "Введите символ: "; cin >> symbol; 
	
	if (symbol >= '!' && symbol <= '/' || symbol >= ':' && symbol <= '@' || symbol >= '[' && symbol <= '_'|| symbol >= '{' && symbol <= '»')
	{
		cout << ". Это служебный знак " << endl;
	}
	else if (symbol >= '0' && symbol <= '9')
	{
		cout << ". Это цифра" << endl;
	}
	else if (symbol >= 'A' && symbol <= 'Z')
	{
		cout << ". Это заглавные английские." << endl;
	}

	else if (symbol >= 'a' && symbol <= 'z')
	{
		cout << ". Это строчные английские." << endl;
	}

	else if (symbol >= 'А' && symbol <= 'Я' || symbol == 'Ё')
	{
		cout << ". Это заглавные русские." << endl;
	}

	else if (symbol >= 'а' && symbol <= 'я' || symbol == 'ё')
	{
		cout << ". Это строчные русские." << endl;
	}
	else
		std::cout << "\nThis is a sign\n";

	system("pause");
	return 0;
}
