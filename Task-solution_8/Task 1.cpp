#include <iostream>
#include <ctime>
using namespace std;

void DynamicArrayTwo(int**& originalArr, int& sizeRow, int& sizeCol); // Функция распределения динамической памяти двумерного массива
void DeletingTwoDimensionalArray(int**& originalArr, int& sizeRow, int& sizeCol); // Функция удаления двумерного динамического массива
void FillingTwoDimensionalArrayRandomNumbers(int**& originalArr, int& sizeRow, int& sizeCol); // Функция заполнения двумерного массива случайными числами
void OutTwoDimensionalArray(int**& originalArr, int& sizeRow, int& sizeCol); //Функция вывода двумерного массива
void AddColumn(int**& originalArr, int**& arrAddColumn, int& sizeRow, int& sizeColAdd, int& position); // функция, добавляющая столбец двухмерному массиву в указанную позицию.
void DelColumn(int**& originalArr, int**& arrDelColumn, int& sizeRow, int& sizeCol, int& position); // функция, удаляющая столбец двухмерному массиву в указанную позицию.
void ArrayShifts(int**& originalArr, int& sizeRow, int& sizeCol, int side, int shift); // циклический сдвиг строк и/или столбцов массив указанное количество раз и в указанную сторону.
void  TransposeMatrix(int**& originalArr, int& sizeRow, int& sizeCol); // Транспонирование матрицы

int main()
{
    setlocale(LC_ALL, "Ru");
    srand(time(0));
    int sizeRow = 5;
    int sizeCol = 5;
    int sizeColAdd = sizeCol + 1;
    int sizeColDel = sizeCol - 1;
    int positionInsert = 0;
    int positionDelete = 0;
    int shift, side;
    int** originalArr;
    int** arrAddColumn;
    int** arrDelColumn;
    //int** arrTransposeTemp;
    DynamicArrayTwo(originalArr, sizeRow, sizeCol);
    DynamicArrayTwo(arrAddColumn, sizeRow, sizeColAdd);
    DynamicArrayTwo(arrDelColumn, sizeRow, sizeColDel);

    FillingTwoDimensionalArrayRandomNumbers(originalArr, sizeRow, sizeCol);

    cout << endl << endl;
    cout << "Изначальный массив: " << endl << endl;

    OutTwoDimensionalArray(originalArr, sizeRow, sizeCol);

    //---------------------------------------------------------------------- Встреча №33 Задание 1

    cout << endl << endl;
    //cout << "Введите Позицию для вставки столбца: "; cin >> positionInsert; cout << endl;
    //AddColumn(originalArr, arrAddColumn, sizeRow, sizeColAdd, positionInsert);

    //cout << "Массив с добовлением столбца в указанную позицию: " << endl << endl;
    //OutTwoDimensionalArray(arrAddColumn, sizeRow, sizeColAdd);

    ////---------------------------------------------------------------------- Встреча №33 Задание 2

    //cout << endl << endl;
    //cout << "Введите Позицию для Удаления столбца: "; cin >> positionDelete; cout << endl;
    //DelColumn(originalArr, arrDelColumn, sizeRow, sizeCol, positionDelete);

    //cout << "Массив с добовлением столбца в указанную позицию: " << endl << endl;
    //OutTwoDimensionalArray(arrDelColumn, sizeRow, sizeColDel);

    ////---------------------------------------------------------------------- Встреча №33 Задание 3

  /*  cout << "\tСдвиг в массиве можно произвести:\n"
        << "\t\t1) Влево;\n"
        << "\t\t2) Вправо;\n"
        << "\t\t3) Вверх;\n"
        << "\t\t4) Вниз;\n"
        << endl << endl;

    cout << "\tВведите сторону сдвига: "; cin >> side; cout << endl;
    cout << "\tВведите количество сдвигов: "; cin >> shift; cout << endl; cout << endl;

    ArrayShifts(originalArr, sizeRow, sizeCol, side, shift);
    OutTwoDimensionalArray(originalArr, sizeRow, sizeCol);

    DeletingTwoDimensionalArray(originalArr, sizeRow, sizeCol);
    DeletingTwoDimensionalArray(arrAddColumn, sizeRow, sizeColAdd);
    DeletingTwoDimensionalArray(arrDelColumn, sizeRow, sizeColDel);*/

    ////---------------------------------------------------------------------- Встреча №34 Задание 1

    TransposeMatrix(originalArr, sizeRow, sizeCol);

    cout << "Вывод массива c транспонированием матрицы: " << endl << endl;
    OutTwoDimensionalArray(originalArr, sizeRow, sizeCol);

    cout << endl << endl;
    system("pause>null");
}

// Функция распределения динамической памяти двумерного массива
void DynamicArrayTwo(int**& originalArr, int& sizeRow, int& sizeCol)
{
    originalArr = new int* [sizeRow];
    for (int i = 0; i < sizeRow; i++) {
        originalArr[i] = new int[sizeCol];
    }
}

// Функция удаления двумерного динамического массива
void DeletingTwoDimensionalArray(int**& originalArr, int& sizeRow, int& sizeCol)
{
    for (int i = 0; i < sizeRow; i++) {
        delete[] originalArr[i];
    }
}

// Функция заполнения двумерного массива случайными числами
void FillingTwoDimensionalArrayRandomNumbers(int**& originalArr, int& sizeRow, int& sizeCol)
{
    for (int i = 0; i < sizeRow; i++)
    {
        for (int j = 0; j < sizeCol; j++)
        {
            originalArr[i][j] = rand() % 50 - 25;
        }
    }
}

//Функция вывода двумерного массива
void OutTwoDimensionalArray(int**& originalArr, int& sizeRow, int& sizeCol)
{
    for (int i = 0; i < sizeRow; i++)
    {
        for (int j = 0; j < sizeCol; j++)
        {
            cout.width(7);
            cout << originalArr[i][j];
        }
        cout << endl;
    }
}

// функция, добавляющая столбец двухмерному массиву в указанную позицию.
void AddColumn(int**& originalArr, int**& arrAddColumn, int& sizeRow, int& sizeColAdd, int& position)
{
    if (position - 1 != 0)
    {
        for (int i = 0; i < sizeRow; i++)
        {
            for (int j = 0; j < position - 1; j++)
            {
                arrAddColumn[i][j] = originalArr[i][j];
            }
        }
    }

    for (int i = 0; i < sizeRow; i++)
    {
        for (int j = position - 1; j < sizeColAdd; j++)
        {
            if (j == position - 1)
            {
                arrAddColumn[i][j] = rand() % 50 - 25; 
            }
            else
            {
                arrAddColumn[i][j] = originalArr[i][j - 1];
            }
        }
    }
}

// функция, удаляющая столбец двухмерному массиву в указанную позицию.
void DelColumn(int**& originalArr, int**& arrDelColumn, int& sizeRow, int& sizeCol, int& position)
{
    if (position - 1 != 0)
    {
        for (int i = 0; i < sizeRow; i++)
        {
            for (int j = 0; j < position - 1; j++)
            {
                arrDelColumn[i][j] = originalArr[i][j];
            }
        }
    }

    for (int i = 0; i < sizeRow; i++)
    {
        for (int j = position - 1; j < sizeCol; j++)
        {
            if (j != position - 1)
            {
                arrDelColumn[i][j - 1] = originalArr[i][j];
            }
        }
    }
}

// циклический сдвиг строк и/или столбцов массив указанное количество раз и в указанную сторону.
void ArrayShifts(int**& originalArr, int& sizeRow, int& sizeCol, int side, int shift)
{
    int temp;

    if (side == 1) // сдвиг влево
    {
        for (int i = 0; i < shift; i++)
        {
            for (int j = 0; j < sizeRow; j++)
            {
                temp = originalArr[j][0];

                for (int g = 0; g < sizeCol - 1; g++)
                {
                    originalArr[j][g] = originalArr[j][g + 1];
                }

                originalArr[j][sizeCol - 1] = temp;
            }
        }
    }
    else if (side == 2) // сдвиг вправо
    {
        for (int i = 0; i < shift; i++)
        {
            for (int j = 0; j < sizeRow; j++)
            {
                temp = originalArr[j][sizeCol - 1];

                for (int g = sizeCol - 1; g > 0; g--)
                {
                    originalArr[j][g] = originalArr[j][g - 1];
                }

                originalArr[j][0] = temp;
            }
        }
    }
    else if (side == 3) // сдвиг вверх
    {
        for (int i = 0; i < shift; i++)
        {
            for (int j = 0; j < sizeCol; j++)
            {
                temp = originalArr[0][j];

                for (int g = 0; g < sizeRow - 1; g++)
                {
                    originalArr[g][j] = originalArr[g + 1][j];
                }

                originalArr[sizeRow - 1][j] = temp;
            }
        }
    }
    else if (side == 4) // сдвиг вниз
    {
        for (int i = 0; i < shift; i++)
        {
            for (int j = 0; j < sizeCol; j++)
            {
                temp = originalArr[sizeRow - 1][j];

                for (int g = sizeRow - 1; g > 0; g--)
                {
                    originalArr[g][j] = originalArr[g - 1][j];
                }

                originalArr[0][j] = temp;
            }
        }
    }
}

// Транспонирование матрицы
void  TransposeMatrix(int**& originalArr, int& sizeRow, int& sizeCol)
{
    int temp = 0;
    int x = 0, y = 0;

    for (int i = 0; i < sizeRow; ++i)
    {
        for (int j = 0; j < sizeCol; j++)
        {
            temp = originalArr[i][j];
            originalArr[i][j] = originalArr[i + x][j - y];
            originalArr[i + x][j - y] = temp;
            if (j >= i)
            {
                y++;
                x++;
            }
        }
        x = 0;
        y = 0;
    }
}