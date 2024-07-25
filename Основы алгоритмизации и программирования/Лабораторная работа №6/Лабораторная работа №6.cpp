/* Вариант 11. Задан двумерный массив A[K, N] и одномерный B[N]. 
Сформировать новый массив, каждый элемент которого равен A[I, J] * B[J]; I = [1, K); J = [1, N). */
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    int k, n, m;
    cout << "Введите размер двумерного массива A: ";
    cin >> k >> n;
    cout << "Введите размер одномерного массива B: ";
    cin >> m;
    int A[k][n];
    int B[m];
    srand(time(0));
    cout << "Элементы массива A:" << endl;
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < n; j++)
        {
            A[i][j] = rand() % 10;
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << "Элементы массива B:" << endl;
    for (int i = 0; i < m; i++)
    {
        B[i] = rand() % 10;
        cout << B[i] << " ";
    }
    int index = 0;
    int result[index] = {};
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < n; j++)
        {
            result[index] = A[i][j] * B[j];
            index++;
        }
    }
    cout << endl << endl << "Новый массив result:" << endl;
    for (int i = 0; i < index; i++)
        cout << result[i] << " ";
    return 0;
}
