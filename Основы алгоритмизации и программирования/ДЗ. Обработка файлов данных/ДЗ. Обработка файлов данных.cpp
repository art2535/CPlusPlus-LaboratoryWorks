#include <iostream>
#include <fstream>
#include <clocale>
#include <windows.h>
#include <string>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    string name = "Files_C++.txt";
    fstream file;
    file.open(name, fstream::in | fstream::out | fstream::app);
    if (!file.is_open())
    {
        cout << "Не удалось открыть файл" << endl;
        return -1;
    }
    else
    {
        int value, n;
        string str;
        cout << "Файл " << name << " успешно открыт" << endl;
        do
        {
            cout << "Введите 1 для записи данных в файл." << endl;
            cout << "Введите 2 для чтения данных из файла." << endl;
            cin >> value;
        } while (value != 1 && value != 2);
        if (value == 1)
        {
            do
            {
                cout << endl << "Запись данных в файл" << endl;
                cout << "Введите количество строк: ";
                cin >> n;
                cout << "Введите строки" << endl;
                cin.ignore();
                for (int i = 0; i < n; i++)
                {
                    SetConsoleCP(1251);
                    getline(cin, str);
                    file << str << endl;
                    SetConsoleCP(866);
                }
                cout << endl << "Хотите продожить вводить данные в файл?" << endl;
                cout << "Введите 1 для продолжения записи данных в файл." << endl;
                cout << "Введите 2 для окончания записи и начала чтения данных из файла." << endl;
                cin >> value;
            } while (value == 1);
        }
        if (value == 2)
        {
            cout << endl << "Чтение данных из файла" << endl;
            file.seekg(0, ios::end);
            if (file.tellg() == 0)
            {
                cout << "Файл пуст" << endl;
                return -1;
            }
            int i = 0;
            file.seekg(0, ios::beg);
            while (getline(file, str))
            {
                cout << i + 1 << ". " << str << endl;
                i++;
            }
        }
    }
    file.close();
    return 0;
}
