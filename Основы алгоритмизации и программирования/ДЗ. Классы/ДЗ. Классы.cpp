#include <iostream>
#include <cmath>
using namespace std;
class Point
{
private:
    double x, y;
public:
    // сеттер - инициализация полей класса с координатами
    void Set(double& x, double& y)
    {
        cout << "Введите х: ";
        cin >> x;
        this->x = x;
        cout << "Введите у: ";
        cin >> y;
        this->y = y;
    }
    // геттер - возврат координаты х
    double GetX()
    {
        return x;
    }
    // геттер - возврат координаты у
    double GetY()
    {
        return y;
    }
};
// функция, проверяющая, что треугольник можно построить
bool IsPossibleToBuildTriangle(double& a, double& b, double& c)
{
    if (a + b > c && a + c > b && b + c > a)
        return true;
    return false;
}
// функция, вычисляющая длины сторон треугольника
double CalculateSizeLenght(Point p1, Point p2)
{
    // округление стороны до 3-х знаков после запятой для корректного вычисления длины стороны
    // и передачи этой стороны в функцию проверки на построение треугольника
    return round(sqrt(pow(p2.GetX() - p1.GetX(), 2.0) + pow(p2.GetY() - p1.GetY(), 2.0)) * 1000) / 1000;
}
// функция, вычисляющая периметр треугольника
double Perimeter(double& a, double& b, double& c)
{
    return a + b + c;
}
// функция, вычисляющая площадь треугольника
double Square(double& a, double& b, double& c)
{
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
int main()
{
    setlocale(LC_ALL, "Rus");
    double x = 0, y = 0;
    Point mas[6];
    cout << "Координаты треугольников" << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << "Введите координаты точки " << i + 1 << endl;
        mas[i].Set(x, y);
        cout << endl;
    }
    Point p1 = mas[0], p2 = mas[1], p3 = mas[2], p4 = mas[3], p5 = mas[4], p6 = mas[5];
    double a = CalculateSizeLenght(p1, p2);
    double b = CalculateSizeLenght(p2, p3);
    double c = CalculateSizeLenght(p1, p3);
    if (IsPossibleToBuildTriangle(a, b, c))
    {
        cout << "Периметр треугольника 1 со сторонами " << a << ", " << b << ", " << c << " равен: " << Perimeter(a, b, c) << endl;
        cout << "Площадь треугольника 1 со сторонами " << a << ", " << b << ", " << c << " равна: " << Square(a, b, c) << endl << endl;
    }
    else
        cout << "Треугольник 1 со сторонами " << a << ", " << b << ", " << c << " нельзя построить!" << endl << endl;
    double a1 = CalculateSizeLenght(p4, p5);
    double b1 = CalculateSizeLenght(p5, p6);
    double c1 = CalculateSizeLenght(p4, p6);
    if (IsPossibleToBuildTriangle(a1, b1, c1))
    {
        cout << "Периметр треугольника 2 со сторонами " << a1 << ", " << b1 << ", " << c1 << " равен: " << Perimeter(a1, b1, c1) << endl;
        cout << "Площадь треугольника 2 со сторонами " << a1 << ", " << b1 << ", " << c1 << " равна: " << Square(a1, b1, c1) << endl;
    }
    else
        cout << "Треугольник 2 со сторонами " << a1 << ", " << b1 << ", " << c1 << " нельзя построить!" << endl;
    return 0;
}