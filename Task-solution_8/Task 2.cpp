#include <iostream>
#include <string>
#include <ctime>
using namespace std;

void DynamicArrayTwo(string**& originalArr, int sizeRow, int sizeCol); // Функция распределения динамической памяти двумерного массива
void DeletingTwoDimensionalArray(string**& originalArr, int sizeRow, int sizeCol); // Функция удаления двумерного динамического массива
void OutTwoDimensionalArray(string**& originalArr, int sizeRow, int sizeCol); //Функция вывода двумерного массива

int main()
{
    setlocale(LC_ALL, "Ru");
    srand(time(0));
    int sizeRow = 3;
    int sizeCol = 3;

    string fullName;
    int numMenu = 0;
    int counterInput = 0;
    bool yesNo = true;

    string** originalArr;
    string** modifiedArr;

    DynamicArrayTwo(originalArr, sizeRow, sizeCol);

    do
    {
        cout << "\t\tМЕНЮ" << endl;
        cout << "\t1. Ввод данных; " << endl; // При необходимости можно организовать бесконечный массив данных.
        cout << "\t2. Поиск по телефону; " << endl;
        cout << "\t3. Поиск по имени; " << endl;
        cout << "\t4. Изменение данных." << endl; 
        cout << "\t5. Вывод данных на консоль." << endl;
        cout << "\t6. Ввход." << endl; cout << endl;

        cout << "\tВведите номер меню: "; cin >> numMenu; cout << endl;

        if (numMenu == 1)
        {
            int x = 1;

            if (counterInput == 0)
            {
                for (int i = 0; i < sizeRow; i++)
                {
                    originalArr[i][0] = to_string(i + 1) + ") ";
                    cout << "Введите ФИО " << i + 1 << "-ого человека: "; cin >> originalArr[i][1];
                    cout << "Введите Телефон " << i + 1 << "-ого человека: "; cin >> originalArr[i][2]; cout << endl;
                }
                cout << endl;
                cout << "Нажми любую кнопку для возврата к меню.";
                system("pause>null");
                system("cls");
                counterInput = 1;
                continue;
            }
            else
            {
                cout << "Ввод данных был произведен." << endl;
                cout << "Нажми любую кнопку для возврата к меню.";
                system("pause>null");
                system("cls");
                continue;
            }         
        }
        if (numMenu == 2)
        {
            string findNumber;

            cout << "Введите искомый телефон или известные цифры: "; cin >> findNumber; cout << endl;

            for (int i = 0; i < sizeRow; i++)
            {
                if (originalArr[i][2].find(findNumber, 0) != string::npos)
                {
                    cout.width(5);
                    cout << originalArr[i][0] << "\t";
                    cout << "Имя: " << originalArr[i][1] << "\t";
                    cout << "Телефон: " << originalArr[i][2];
                    cout << endl;
                }
            }
            cout << endl;
            cout << "Нажми любую кнопку для возврата к меню.";
            system("pause>null");
            system("cls");
            continue;
        }
        if (numMenu == 3)
        {
            string findName;

            cout << "Введите искомый телефон или известные цифры: "; cin >> findName; cout << endl;

            for (int i = 0; i < sizeRow; i++)
            {
                if (originalArr[i][1].find(findName, 0) != string::npos)
                {
                    cout.width(5);
                    cout << originalArr[i][0] << "\t";
                    cout << "Имя: " << originalArr[i][1] << "\t";
                    cout << "Телефон: " << originalArr[i][2];
                    cout << endl;
                }
            }
            cout << endl;
            cout << "Нажми любую кнопку для возврата к меню.";
            system("pause>null");
            system("cls");
            continue;
        }
        if (numMenu == 4)
        {
            int stringToChange;

            cout << endl;
            cout << "Список записей: " << endl << endl;
            OutTwoDimensionalArray(originalArr, sizeRow, sizeCol);
            cout << endl;
            cout << "Введите номер строки для изменения: "; cin >> stringToChange;

            originalArr[stringToChange - 1][0] = to_string(stringToChange) + ") ";         
            cout << "Введите ФИО: "; cin >> originalArr[stringToChange - 1][1];
            cout << "Введите Телефон : "; cin >> originalArr[stringToChange - 1][2]; cout << endl;

            cout << endl;
            cout << "Нажми любую кнопку для возврата к меню.";
            system("pause>null");
            system("cls");
            continue;
        }

        if (numMenu == 5)
        {
            cout << endl;
            cout << "Список записей: " << endl << endl;
            OutTwoDimensionalArray(originalArr, sizeRow, sizeCol);
            cout << endl;
            cout << "Нажми любую кнопку для возврата к меню.";
            system("pause>null");
            system("cls");
            counterInput = 1;
            continue;
        }
        if (numMenu == 6)
        {
             yesNo = false;
        }
    } while (yesNo);
}

// Функция распределения динамической памяти двумерного массива
void DynamicArrayTwo(string**& originalArr, int sizeRow, int sizeCol)
{
    originalArr = new string * [sizeRow];
    for (int i = 0; i < sizeRow; i++) {
        originalArr[i] = new string[sizeCol];
    }
}

// Функция удаления двумерного динамического массива
void DeletingTwoDimensionalArray(string**& originalArr, int sizeRow, int sizeCol)
{
    for (int i = 0; i < sizeRow; i++) {
        delete[] originalArr[i];
    }
}

//Функция вывода двумерного массива
void OutTwoDimensionalArray(string**& originalArr, int sizeRow, int sizeCol)
{
    for (int i = 0; i < sizeRow; i++)
    {
        cout.width(5);
        cout << originalArr[i][0];
        cout << "Имя: " << originalArr[i][1] << "\t";
        cout << "Телефон: " << originalArr[i][2];            
        cout << endl;
    }
}
