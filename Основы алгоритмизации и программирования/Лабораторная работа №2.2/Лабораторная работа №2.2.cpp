// Создать консольное приложение, в котором вычисляется значение арифметического выражения в соответствии с выданным вариантом.
#define _USE_MATH_DEFINES
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    double x, y, z;
    cout << "Введите х: ";
    cin >> x;
    cout << "Введите у: ";
    cin >> y;
    cout << "Введите z: ";
    cin >> z;
    double c = exp2(pow(y, x)) + pow(pow(3, x), y) - y * (atan(z) - M_PI / 6) / (abs(x) + 1 / (pow(y, 2) + 1));
    cout << "Результат вычислений: " << c << endl;
    return 0;
}