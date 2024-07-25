// Вариант 11. Составить рекурсивную программу перевода двоичного числа в десятичную систему счисления.
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
// функция для определения, что число содержит символы двоичного алфавита
bool isCorrectNumber(string& str)
{
	for (char c : str)
	{
		if (c != '0' && c != '1')
			return false;
	}
	return true;
}
// функция для определения, что все символы числа одни нули
bool isAllZeros(string& str)
{
	for (char c : str)
	{
		if (c != '0')
			return false;
	}
	return true;
}
// рекурсивная функция перевода двоичного числа в десятичную систему счисления
int fromBinaryToDecimal(string& str, int index)
{
	if (index == -1)
		return 0;
	return (str[index] - '0') * pow(2, str.size() - index - 1) + fromBinaryToDecimal(str, index - 1);
}
int main()
{
	setlocale(LC_ALL, "Rus");
	string binary;
	cout << "Введите двоичное число: ";
	cin >> binary;
	bool isNegative;
	if (binary.substr(0, 2) == "1.")
	{
		isNegative = true;
		binary = binary.substr(2);
	}
	if (binary.substr(0, 2) == "0.")
	{
		isNegative = false;
		binary = binary.substr(2);
	}
	if (isCorrectNumber(binary))
	{
		if (isAllZeros(binary))
			cout << "Десятичное число: 0" << endl;
		else
		{
			int dec = fromBinaryToDecimal(binary, binary.size() - 1);
			if (isNegative)
				cout << "Десятичное число: -" << dec << endl;
			else
				cout << "Десятичное число: " << dec << endl;
		}
	}
	else
		cout << "Число содержит недопустимые символы!" << endl;
	return 0;
}