/* Вариант 11. Из положительных значений двух целочисленных массивов различной размерности сформировать общий массив.
Найти среднее арифметическое элементов, расположенных в массиве после последнего совершенного числа.
Создать функции для:
- ввода массива,
- вычисления среднего значения элементов массива,
­- определения совершенного числа.
Функции описать после главной функции */

#include <iostream>
using namespace std;

// Прототипы функций
void inputArray(int*, int);
void input2DArray(int**, int, int);
void combineArrays(int*, int**, int*, int, int, int);
bool isPerfectNumber(int);
double averageAfterPerfect(int*, int);

int main()
{
    setlocale(LC_ALL, "Rus");
    int size, numRows, numCols, maxSize;
    int* arr1, * combinedArr;

    cout << "Введите размер одномерного массива: ";
    cin >> size;
    cout << "Введите размер двумерного массива (строки * столбцы): ";
    cin >> numRows >> numCols;

    maxSize = size + numRows * numCols;

    arr1 = new int[size];
    int** arr2 = new int* [numRows];
    for (int i = 0; i < numRows; ++i)
        arr2[i] = new int[numCols];

    combinedArr = new int[maxSize];

    // Ввод одномерного массива
    inputArray(arr1, size);

    // Ввод двумерного массива
    input2DArray(arr2, numRows, numCols);

    // Объединение массивов
    combineArrays(arr1, arr2, combinedArr, size, numRows, numCols);

    // Вывод объединенного массива
    cout << "Итоговый массив, содержащий элементы обоих массивов:" << endl;
    for (int i = 0; i < maxSize; ++i)
        cout << *(combinedArr + i) << " ";
    cout << endl;

    double average = averageAfterPerfect(combinedArr, maxSize);
    if (average != -1)
        cout << "Среднее арифметическое элементов после последнего совершенного числа: " << average << endl;
    else
        cout << "Среднее арифметическое элементов посчитать невозможно!" << endl;

    // Освобождение памяти
    delete[] arr1;
    for (int i = 0; i < numRows; ++i)
        delete[] arr2[i];
    delete[] arr2;
    delete[] combinedArr;
    return 0;
}

// Функция для ввода одномерного массива
void inputArray(int* arr, int size)
{
    cout << "Введите " << size << " целых чисел в одномерный массив:" << endl;
    for (int i = 0; i < size; ++i)
    {
        int x;
        cin >> x;
        if (x > 0)
            *(arr + i) = x;
        else
            i--;
    }
}

// Функция для ввода двумерного массива
void input2DArray(int** arr, int numRows, int numCols)
{
    cout << "Введите " << numRows * numCols << " целых чисел для двумерного массива " << numRows << "x" << numCols << ":" << endl;
    for (int i = 0; i < numRows; ++i) 
    {
        for (int j = 0; j < numCols; ++j)
        {
            int x;
            cin >> x;
            if (x > 0)
                *(*(arr + i) + j) = x;
            else
                i--;
        }
    }
}

// Функция для соединения одномерного и двумерного массивов
void combineArrays(int* arr1, int** arr2, int* combined, int size1, int numRows, int numCols)
{
    int index = 0;
    // Добавление элементов одномерного массива
    for (int i = 0; i < size1; ++i) 
    {
        *(combined + index) = *(arr1 + i);
        ++index;
    }
    // Добавление элементов двумерного массива
    for (int i = 0; i < numRows; ++i) 
    {
        for (int j = 0; j < numCols; ++j) 
        {
            *(combined + index) = *(*(arr2 + i) + j);
            ++index;
        }
    }
}

// Функция для определения совершенного числа
bool isPerfectNumber(int num)
{
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) 
    {
        if (num % i == 0)
            sum += i;
    }
    return sum == num;
}

// Функция для вычисления среднего значения после последнего совершенного числа
double averageAfterPerfect(int* arr, int size)
{
    int lastPerfectNumberIndex = -1;
    for (int i = 0; i < size; i++) 
    {
        if (isPerfectNumber(*(arr + i)))
            lastPerfectNumberIndex = i;
    }
    cout << "Индекс совершенного числа в массиве - " << lastPerfectNumberIndex << endl;
    if (lastPerfectNumberIndex == -1)
        return -1;
    int sum = 0;
    int count = 0;
    for (int i = lastPerfectNumberIndex + 1; i < size; i++) 
    {
        sum += *(arr + i);
        count++;
    }
    if (sum == 0)
        return -1;
    else
        return static_cast<double>(sum) / count;
}