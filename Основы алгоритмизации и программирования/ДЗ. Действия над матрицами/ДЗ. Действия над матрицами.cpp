// Выполнить действия над правильными матрицами A[n,n] и B[n,n].
// -B^2 * (A^2 + 0,5 * A * B)

#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
int size1 = 0;

// Функция для инициализации матриц
double** init() 
{
    srand(time(0));
    double** matrix = new double* [size1];
    for (int i = 0; i < size1; i++)
        matrix[i] = new double[size1];
    for (int i = 0; i < size1; i++) 
    {
        for (int j = 0; j < size1; j++)
            matrix[i][j] = (rand() % 50 - 10) / 2.0;
    }
    return matrix;
}

// Функция для вывода матрицы на экран
void print(double** matrix) 
{
    for (int i = 0; i < size1; i++) 
    {
        for (int j = 0; j < size1; j++) 
        {
            cout.setf(ios::fixed);
            cout.precision(5);
            cout << setw(15) << matrix[i][j];
        }
        cout << endl;
    }
}

// Функция для перемножения матриц
double** multiplication(double** first, double** second)
{
    double** result = new double* [size1];
    for (int i = 0; i < size1; i++)
        result[i] = new double[size1];
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size1; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < size1; k++)
                result[i][j] += first[i][k] * second[k][j];
        }
    }
    return result;
}

// Функция для возведения матрицы в степень k
double** exponentiation(double** matrix, int k) 
{
    double** result = new double* [size1];
    for (int i = 0; i < size1; i++)
        result[i] = new double[size1];
    while (k > 0) 
    {
        if (k % 2 == 1)
            result = multiplication(result, matrix);
        result = multiplication(matrix, matrix);
        k /= 2;
    }
    return result;
}

// Функция для сложения матриц
double** sum(double** first, double** second) 
{
    for (int i = 0; i < size1; i++) 
    {
        for (int j = 0; j < size1; j++)
            first[i][j] += second[i][j];
    }
    return first;
}

// Функция для умножения матрицы на скаляр
double** multiplication(double** matrix, double k) 
{
    for (int i = 0; i < size1; i++) 
    {
        for (int j = 0; j < size1; j++)
            matrix[i][j] *= k;
    }
    return matrix;
}

// Функция для удаления матрицы из памяти
void Delete(double** matrix) 
{
    for (int i = 0; i < size1; i++)
        delete[] matrix[i];
    delete[] matrix;
}

int main() 
{
    setlocale(LC_ALL, "Rus");
    cout << "Введите размер правильных квадратных матриц: ";
    cin >> size1;

    // инициализация и вывод матрицы A
    double** A = init();
    cout << "Матрица А" << endl;
    print(A);
    cout << endl;

    // инициализация и вывод матрицы B
    double** B = init();
    cout << "Матрица B" << endl;
    print(B);
    cout << endl;

    // выполнение действий над матрицей по заданию
    cout << "Итоговая матрица" << endl;
    double** result = multiplication(multiplication(exponentiation(B, 2), -1), sum(exponentiation(A, 2), multiplication(multiplication(A, B), 0.5)));
    print(result);
    cout << endl;

    // удаление матриц
    Delete(A);
    Delete(B);
    Delete(result);

    return 0;
}