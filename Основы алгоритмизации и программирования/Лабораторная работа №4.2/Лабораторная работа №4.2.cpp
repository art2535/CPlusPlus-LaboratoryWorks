#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    double x, y, y1;
    cout << "Введите значение х: ";
    cin >> x;
    cout << "Введите значение у: ";
    cin >> y;
    cout << setw(7) << "x\t|" << setw(7) << "y\t|" << setw(7) << "f(x,y)" << endl;
    cout << "-------------------------" << endl;
    while (x <= M_PI)
    {
        y1 = y;
        do
        {
            if (sin(x) - cos(y1) == 0)
                cout << setprecision(4) << x << "\t|" << setprecision(4) << y1 << "\t|" << setw(5) << "Деление на 0" << endl;
            else
            {
                double result = (sin(x) + cos(y1)) / (sin(x) - cos(y1));
                cout << setprecision(4) << x << "\t|" << setprecision(4) << y1 << "\t|" << setw(5) << result << endl;
            }
            cout << "-------------------------" << endl;
            y1 += M_PI / 10;
        } while (y1 <= M_PI);
        x += M_PI / 10;
    }
    return 0;
}