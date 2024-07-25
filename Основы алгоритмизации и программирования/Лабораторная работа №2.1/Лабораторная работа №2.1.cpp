#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int n;
	cout << "Введите четырехзначное число: ";
	cin >> n;
	int a = abs(n / 1000 % 10);
	int b = abs(n / 100 % 10);
	int c = abs(n / 10 % 10);
	int d = abs(n % 10);
	cout << "Результат исследования - " << boolalpha << (a != b && a != c && a != d && b != c && b != d && c != d);
	return 0;
}
