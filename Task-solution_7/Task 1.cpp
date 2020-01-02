#include <iostream>
#include <string>
using namespace std;

void DelChar(string& str, int num);
void DelAllChar(string& str, char simbol);
void InsertChar(string& str, int num, char simbol);
void ReplaceChar(string& str);
int CountChar(string& str, char simbol);
void NumberCharacters(string& str);

int main()
{
    setlocale(LC_ALL, "ru");

    int menu, num;
    char simbol;
    
    string str = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. 12345.";

    cout << endl << endl;
    cout << "Строка: " << str << endl << endl;

    cout << "1) Удалить из строки символ с заданным номером;" << endl;
    cout << "2) Удалить из строки все вхождения в нее заданного символа;" << endl;
    cout << "3) Вставить в строку в указанную позицию заданный символ;" << endl;
    cout << "4) Заменяет  все  символы  запятой в  строке, на символы восклицательного знака;" << endl;
    cout << "5) Посчитать сколько раз введеный символ встречается в строке" << endl;
    cout << "6) Определить  количество  букв,  количество  цифр  и  количество остальных символов, присутствующих в строке." << endl << endl;
    cout << "Введите номер меню: ";  cin >> menu;

    if (menu == 1)
    {
        cout << "Введите номер символа: "; cin >> num; cout << endl;
        DelChar(str, num);

        cout << endl;
        cout << "Строка: " << str << endl << endl;
    }
    else if (menu == 2)
    {
        cout << "Введите символ для удаления из строки: "; cin >> simbol; cout << endl;
        DelAllChar(str, simbol);

        cout << endl;
        cout << "Строка: " << str << endl << endl;
    }   
    else if (menu == 3)
    {
        cout << "Введите номер позиции куда необходимо вставить символ: "; cin >> num;
        cout << "Введите символ для добовления в строку: "; cin >> simbol; cout << endl;
        InsertChar(str, num, simbol);

        cout << endl;
        cout << "Строка: " << str << endl << endl;
    }  
    else if (menu == 4)
    {  
        ReplaceChar(str);

        cout << endl;
        cout << "Строка: " << str << endl << endl;
    }   
    else if (menu == 5)
    {  
        cout << "Введите символ: "; cin >> simbol; cout << endl;
        cout << "Символов "<< simbol << " в строке: " << CountChar(str,simbol) << endl << endl;
    }    
    else if (menu == 6)
    {  
        cout << endl;
        NumberCharacters(str);
    }


    cout << endl << endl;
    system("pause>null");
}

void DelChar(string& str, int num)
{
    str.erase(str.begin() + num);
}
void DelAllChar(string& str, char simbol)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == simbol)
        {
            str.erase(i, 1);
        }      
    }
}
void InsertChar(string& str, int num, char simbol)
{
    str.insert(num, 1, simbol);
}
void ReplaceChar(string& str)
{
    int simbol1 = ',';
    int simbol2 = '!';

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == simbol1)
        {
            str[i] = simbol2;
        }
    }
}
int CountChar(string& str, char simbol)
{
    int count = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == simbol)
        {
            count++;
        }
    }
    return count;
}
void NumberCharacters(string& str)
{
    int countNum = 0, temp, countLetter = 0, countSimbol = 0;

    for (int i = 0; i < str.length(); i++)
    {
        temp = (int)(str[i]);

        if (temp >= 48 && temp < 58)
        {
            countNum++;
        }        
        if (temp >= 65 && temp < 91)
        {
            countLetter++;
        }      
        if (temp >= 97 && temp < 123)
        {
            countLetter++;
        }        
        if (temp >= 32 && temp < 48)
        {
            countSimbol++;
        }        
        if (temp >= 58 && temp < 65)
        {
            countSimbol++;
        }        
        if (temp >= 91 && temp < 97)
        {
            countSimbol++;
        }        
        if (temp >= 123 && temp <= 126)
        {
            countSimbol++;
        }
    }
    cout << "Количество цифр в строке: " << countNum << endl;
    cout << "Количество букв в строке: " << countLetter << endl;
    cout << "Количество символов в строке: " << countSimbol << endl;
}
