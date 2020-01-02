#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cctype> 
using namespace std;

void ReplaceWordStr(string& str, string replacedWord, string wordToReplace); // замена найденого слова в строке
char* UppercaseLatter(char* str1); // Увелечение первой буквы в заглавную
int HowManyLettersTheText(char* str, char simbol); //
int HowManyNumbersText(char* str);

int main()
{
    setlocale(LC_ALL, "ru");

    // можно организовать ввод слов от пользователя 
    string str = "lorem Ipsum is simply dummy text of the printing 123 and typesetting industry.";
    string replacedWord = "text";
    string wordToReplace = "TEXT_NEW"; 
    char* ptrStr = new char[str.length() + 1]; // +1 для нулевого байта
    strcpy(ptrStr, str.c_str());

    cout << endl << endl;
    cout << "Есть строка: " << str << endl << endl;
    cout << "Необходимо поменять слово - " << replacedWord << " на слово - " << wordToReplace << endl << endl;

    for (int i = 0; i < 50; i++) { cout << "_"; }
    //------------------------------------------------------------------------
    cout << endl << endl;

    ReplaceWordStr(str, replacedWord, wordToReplace); // замена найденого слова в строке
    cout << "Строка с заменой слова: " << str;

    cout << endl;
    for (int i = 0; i < 50; i++) { cout << "_"; }
    //------------------------------------------------------------------------
    cout << endl << endl;

    string str1 = UppercaseLatter(ptrStr); // Преобразование первой буквы в заглавную

    cout << "Строка с увелечением первой буквы: " << str1;

    cout << endl;
    for (int i = 0; i < 50; i++) { cout << "_"; }
    //------------------------------------------------------------------------
    cout << endl << endl;

    char simbol = 'i';

    int HowManyLetters = HowManyLettersTheText(ptrStr, simbol);

    cout << "Сколько символов - '" << simbol  << "' в строке: " << HowManyLetters;

    cout << endl;
    for (int i = 0; i < 50; i++) { cout << "_"; }
    //------------------------------------------------------------------------
    cout << endl << endl;

    int HowManyNumbers = HowManyNumbersText(ptrStr);

    cout << "Сколько цифр в строке: " << HowManyNumbers;

    cout << endl << endl;
    delete[] ptrStr;
    system("pause>null");
}

void ReplaceWordStr(string& str, string replacedWord, string wordToReplace)
{
    int length = replacedWord.length();
    int find = str.find("text");

    str.replace(find, length, wordToReplace);  
}
char* UppercaseLatter(char* str1)
{
        str1[0] = toupper(str1[0]);

    return str1;
}
int HowManyLettersTheText(char* str, char simbol)
{
    int count = 0;

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == simbol)
        {
            count++;
        }
    }
    return count;
}
int HowManyNumbersText(char* str)
{
    int count = 0;

    for (int i = 0; i < strlen(str); i++)
    {
        if (isdigit(str[i]))
        {
            count++;
        }
    }
    return count;
}