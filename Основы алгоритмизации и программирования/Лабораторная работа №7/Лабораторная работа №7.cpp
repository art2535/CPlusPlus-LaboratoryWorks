/*Задача. Дана последовательность целых чисел.
Удалить все элементы, содержащиеся в интервале [a; b] (пояснение: значение элемента попадает в интервал [a; b]).
Среди оставшихся элементов найти номера минимальных элементов до и после сортировки.*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
int a, b;
bool Predicate(int n)
{
    return (n >= a) && (n <= b);
}
int main()
{
    setlocale(LC_ALL, "Rus");
    int n, Min, Min_2;

    // вводим число элементов последовательности
    cout << "Введите число элементов последовательности: ";
    cin >> n;

    // объявляем вектор последовательности целых чисел
    vector<int> arr(n);

    // вводим элементы последовательности
    cout << "Введите элементы последовательности" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr.push_back(arr[i]);
    }

    // вводим границы числового интервала
    cout << "Введите граничные числа интервала [a; b]: ";
    cin >> a >> b;

    // удаляем элементы, входящие в промежуток [a; b]
    arr.erase(remove_if(arr.begin(), arr.end(), Predicate), arr.end());

    // выводим вектор из элементов, не входящих в промежуток [a; b]
    if (!arr.empty())
    {
        cout << "Вектор из оставшихся элементов" << endl;
        for (vector<int>::iterator iter = arr.begin(); iter < arr.end(); iter++)
            cout << *iter << " ";
        cout << endl;

        // находим индекс минимального элемента до сортировки
        // distande - метод, возращающий индекс элемента в векторе
        Min = distance(arr.begin(), min_element(arr.begin(), arr.end()));
        cout << "Номер минимального элемента до сортировки - " << Min << endl;
    }
    else
        cout << "Вектор пустой" << endl;

    // сортируем вектор
    sort(arr.begin(), arr.end());
    if (!arr.empty())
    {
        int index = 0;
        int index_1 = 0;
        cout << "Отсортированный вектор" << endl;
        for (int i : arr)
            cout << i << " ";
        cout << endl;

        // находим индекс минимального элемента после сортировки
        for (int i = 0; i < arr.size(); i++)
            int Min_2 = min_element(arr.begin(), arr.end()) - arr.begin();
        cout << "Номер минимального элемента после сортировки - " << Min_2 << endl;
    }
    else
        cout << "Невозможно отсортировать вектор, если в нем нет элементов" << endl;
    return 0;
}