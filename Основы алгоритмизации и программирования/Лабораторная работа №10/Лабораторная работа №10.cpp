/* Вариант 11. Создать программно текстовый файл с произвольным количеством строк.
Вывести содержимое файла на экран. В другой файл переписать предложения, не содержащие запятых. */

#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
using namespace std;
// функция для разделения строк на предложения
void splitIntoSentences(const string& text, fstream& outputFile) {
    string sentence;
    for (char c : text) 
    {
        sentence += c;
        if (c == '.' || c == '?' || c == '!') 
        {
            if (sentence.find(',') == string::npos)
                outputFile << sentence;
            sentence = "";
        }
    }
    outputFile << endl;
}
int main()
{
    setlocale(LC_ALL, "Rus");
    int value;
    string name1 = "MyFile.txt";
    string name2 = "NewMyFile.txt";
    fstream file1;
    file1.open(name1, fstream::in | fstream::out | fstream::app);
    if (!file1.is_open())
    {
        cout << "Файл " << name1 << " не удалось открыть для записи и чтения данных" << endl;
        return -1;
    }
    else
    {
        int n = 0;
        string str;
        cout << "Файл " << name1 << " успешно открыт для записи и чтения данных" << endl << endl;
        do
        {
            cout << "Введите 1 для записи данных в файл." << endl;
            cout << "Введите 2 для чтения данных из файла." << endl;
            cout << "Введите 3 для фильтрации данных из файла." << endl;
            cout << "Пункт меню - ";
            cin >> value;
            cout << endl;
            string answer;
            if (value == 3)
            {
                do
                {
                    cout << "Вы уверены, что данные записаны в файл " << name1 << "?" << endl;
                    cout << "Введите 'Yes', если данные записаны в файл или 'No' в противном случае - ";
                    cin >> answer;
                    cout << endl;
                } while (answer != "Yes" && answer != "No");
            }
        } while (value != 1 && value != 2 && value != 3);
        if (value == 1)
        {
            do
            {
                cout << endl << "Запись данных в файл " << name1 << endl;
                cout << "Введите количество строк: ";
                cin >> n;
                cout << "Введите строки" << endl;
                cin.ignore();
                for (int i = 0; i < n; i++)
                {
                    SetConsoleCP(1251);
                    getline(cin, str);
                    file1 << str << endl;
                    SetConsoleCP(866);
                }
                do
                {
                    cout << endl << "Хотите продожить вводить данные в файл?" << endl;
                    cout << "Введите 1 для продолжения записи данных в файл." << endl;
                    cout << "Введите 2 для окончания записи и начала чтения данных из файла." << endl;
                    cout << "Введите 3 для начала фильтрации данных из файла." << endl;
                    cout << "Пункт меню - ";
                    cin >> value;
                } while (value != 1 && value != 2 && value != 3);
            } while (value == 1);
        }
        if (value == 2)
        {
            cout << endl << "Чтение данных из файла " << name1 << endl;
            file1.seekg(0, ios::end);
            if (file1.tellg() == 0)
            {
                cout << "Файл пуст" << endl;
                return -1;
            }
            file1.seekg(0, ios::beg);
            while (getline(file1, str))
                cout << str << endl;
            cout << endl;
            do
            {
                cout << "Хотите фильтровать данные из файла?" << endl;
                cout << "Нажмите 3 для начала фильтрации" << endl;
                cout << "Нажмите 4 для выхода из программы" << endl;
                cout << "Пункт меню - ";
                cin >> value;
                cout << endl;
            } while (value != 3 && value != 4);
            if (value == 4)
            {
                cout << "Вы не осуществили фильтрацию данных!" << endl;
                cout << "Программа завершена!" << endl;
                return 0;
            }
        }
    }
    file1.close();
    if (value == 3)
    {
        cout << endl << "Фильтрация данных..." << endl;
        fstream file2;
        file2.open(name2, fstream::out | fstream::in);
        if (!file2.is_open())
        {
            cout << "Файл " << name2 << " не удалось открыть для фильтрации данных" << endl;
            return -1;
        }
        else
        {
            cout << "Файл " << name2 << " успешно открыт для фильтрации данных" << endl;
            file1.open(name1, fstream::in);
            if (!file1.is_open())
            {
                cout << "Файл " << name1 << " не удалось открыть как источник данных для копирования данных" << endl;
                cout << "Перезапись данных не прошла" << endl;
                return -1;
            }
            else
            {
                string str1;
                cout << "Файл " << name1 << " успешно открыт как источник данных для копирования данных" << endl;
                while (getline(file1, str1)) {
                    splitIntoSentences(str1, file2);
                }
                cout << "Фильтрация данных прошла успешно" << endl;
            }
            file1.close();
            string str2;
            cout << endl << "Содержимое файла " << name2 << endl;
            file2.seekg(0, ios::beg);
            while (getline(file2, str2))
                cout << str2;
        }
        file2.close();
    }
    return 0;
}