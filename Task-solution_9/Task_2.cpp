/*
        Реализовать структуру «Машина» (цвет, модель, номер). Номер машины может представлять из
    себя или пятизначный номер или слово до 8 символов.Рекомендации: номер реализовать как объединение.
    Создать экземпляр структуры «Машина» и реализовать для него следующие функции:
            Заполнение машины
            Печать машины
    Создать массив из 10 экземпляров структуры «Машина» и реализовать для него следующиефункции:
            Редактировать машину
            Печать всех машин
            Поиск машины по номеру
*/

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

struct Car
{
    static int const SIZE = 10;
    string id;
    string title;
    string color;
    string number;

    //Car()
    //{
    //    cout << "Введите модель машины: "; cin >> title; cout << endl;
    //    cout << "Введите цвет машины: "; cin >> color; cout << endl;
    //    cout << "Введите номер: "; cin >> number; cout << endl;
    //    id = to_string(ID);  
    //}

    // вывод в консоль 
   static void Print(Car arrCars)
    {
        if (arrCars.id == to_string(1))
        {
            cout.width(7);
            cout << "ID |" << " Название\t|" << " Цвет\t\t|" << " Номер\t\t|" << endl;
            for (int i = 0; i < 57; i++)
            {
                cout << "-";
            }
            cout << endl;
        }

        cout.width(5);
        cout << arrCars.id << " | ";
        cout << arrCars.title << "\t\t| ";
        cout << arrCars.color << "\t\t| ";
        cout << arrCars.number << "\t\t| ";
        cout << endl;
    }

    // Редактирование машины
    void EditCar()
    {
        cout << "Введите модель машины: "; cin >> title; cout << endl;
        this->title = title;
        cout << "Введите цвет машины: "; cin >> color; cout << endl;
        this->color = color;
        cout << "Введите номер: "; cin >> number; cout << endl;
        this->number = number;
    }

    //Поиск машины по номеру или части номера
    void SearchForANumber(Car car[], string number)
    {
        bool flag = true;

        cout << "Машины с указанным номером:" << endl << endl;

        cout.width(7);
        cout << "ID |" << " Название\t|" << " Цвет\t\t|" << " Номер\t\t|" << endl;
        for (int i = 0; i < 57; i++)
        {
            cout << "-";
        }
        cout << endl;

        for (int i = 0; i < SIZE; i++)
        {
            if (car[i].number == number)
            {
                Print(car[i]);
                flag = false;
            }
        }

        if (flag)
        {
            cout << "Машины с указанным номером нет в базе." << endl;
        }
    }  
};

int main()
{
    setlocale(LC_ALL, "ru");
    Car arrCar[Car::SIZE];
    Car cars;
    srand(time(0));

    bool yesNo = true;
    int numMenu = 0;
    int temp;
    string tempStr;

    // Заполнение массива для тестов чтоб не вводить каждый раз.
    for (int i = 0; i < Car::SIZE; i++)
    {
        arrCar[i].id = to_string(i + 1);
        arrCar[i].title = to_string(rand() % 10);
        arrCar[i].color = to_string(rand() % 10);
        arrCar[i].number = to_string(rand() % 10);
    }

    do
    {
        cout << "\t\tМЕНЮ" << endl;
        cout << "\t1. Печать всех машин; " << endl; // При необходимости можно организовать бесконечный массив данных.
        cout << "\t2. Редактирование машины; " << endl;
        cout << "\t3. Поиск машины по номеру; " << endl;
        cout << "\t4. Выход." << endl; cout << endl;

        cout << "\tВведите номер меню: "; cin >> numMenu; cout << endl;

        if (numMenu == 1)
        {
            for (Car number : arrCar)
            {
                Car::Print(number);
            }

            cout << endl;
            cout << "Нажми любую кнопку для возврата к меню.";
            system("pause>null");
            system("cls");
            continue;
        }
        if (numMenu == 2)
        {
            cout << "Машины в базе: " << endl;
            for (Car number : arrCar)
            {
                Car::Print(number);
            }
            cout << endl;

            cout << "Введите номер id машины для изменения: "; cin >> temp;

            if (temp > 0 || temp <= 10)
            {
                arrCar[temp - 1].EditCar();
            }
            else
            {
                cout << "Машины с таким Id нет в базе." << endl;
            }

            cout << endl;
            cout << "Нажми любую кнопку для возврата к меню.";
            system("pause>null");
            system("cls");
            continue;
        }
        if (numMenu == 3)
        {
            cout << "Введите номер для поиска: "; cin >> tempStr;

            cars.SearchForANumber(arrCar, tempStr);

            cout << endl;
            cout << "Нажми любую кнопку для возврата к меню.";
            system("pause>null");
            system("cls");
            continue;
        }      
        if (numMenu == 4)
        {
            yesNo = false;
        }
    } while (yesNo);

    cout << endl << endl;
    system("pause>null");
}
