/* Вариант 11. Определить название континента (Евразия, Африка, Австралия, Северная Америка, Южная Америка) 
по заданному названию страны. */
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int num = 0;
	cout << "Страны:" << endl <<
		"1. Россия 2. Китай 3. Португалия 4. Швеция 5. Белоруссия" << endl <<
		"6. Аргентина 7. Чили 8. Бразилия 9. Колумбия 10. Венесуэла" << endl <<
		"11. Египет 12. Алжир 13. Конго 14. Сомали 15. ЮАР" << endl <<
		"16. США 17. Мексика 18. Канада 19. Гватемала 20. Куба" << endl <<
		"21. Австралия 22. Индонезия 23. Новая Гвинея 24. Новая Зеландия 25. Соломоновы острова" << endl <<
		"26. Перу 27. Чили 28. Папуа-Новая Гвинея 29. Эфиопия 30. Монголия" << endl;
	cout << "Введите номер страны: ";
	cin >> num;
	switch (num)
	{
	case 1: case 2: case 3: case 4: case 5: case 30:
		cout << "Континент - Евразия" << endl << endl;
		break;
	case 21: case 22: case 23: case 24: case 25: case 28:
		cout << "Континент - Австралия" << endl << endl;
		break;
	case 16: case 17: case 18: case 19: case 20:
		cout << "Континент - Северная Америка" << endl << endl;
		break;
	case 6: case 7: case 8: case 9: case 10: case 26: case 27:
		cout << "Континент - Южная Америка" << endl << endl;
		break;
	case 11: case 12: case 13: case 14: case 15: case 29:
		cout << "Континент - Африка" << endl << endl;
		break;
	default:
		cout << "Неизвестная страна" << endl << endl;
		break;
	}
	return 0;
}