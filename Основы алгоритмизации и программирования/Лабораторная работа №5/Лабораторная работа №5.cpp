// Вариант 11. В числовом массиве A (N) поменять местами следующие элементы: 1 ↔ 2; 3 ↔ 4; 5 ↔ 6 и т.д.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Введите количество элементов массива: ";
    cin >> n;
    int arr[n];
    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n - 1; i += 2)
    {
        int tmp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = tmp;
    }
    cout << "Новый массив:" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}