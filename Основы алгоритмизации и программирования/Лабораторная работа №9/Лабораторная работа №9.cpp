#include <iostream>
#include <string>
#include <ctime>
using namespace std;
struct Student
{
    string fullName;
    unsigned int groupNumber;
    unsigned int grades[5];
};
int main()
{
    srand(time(0));
    int numStudents;
    cout << "Введите количество учащихся: ";
    cin >> numStudents;
    cout << endl;
    Student students[numStudents];
    for (int i = 0; i < numStudents; i++)
    {
        cout << "Введите имя студента " << i + 1 << ": ";
        cin.ignore();
        getline(cin, students[i].fullName);
        cout << "Введите номер группы студента " << students[i].fullName << ": ";
        cin >> students[i].groupNumber;
        cout << "Оценки студента " << students[i].fullName << ": ";
        for (int j = 0; j < 5; j++)
        {
            students[i].grades[j] = 2 + rand() % 4;
            cout << students[i].grades[j] << " ";
        }
        cout << endl << endl;
    }
    for (int i = 0; i < numStudents; i++)
    {
        for (int j = 0; j < numStudents - i - 1; j++)
        {
            if (students[j].groupNumber > students[j + 1].groupNumber)
                swap(students[j].groupNumber, students[j + 1].groupNumber);
        }
    }
    cout << "Отсортированный массив" << endl;
    for (int i = 0; i < numStudents; i++)
    {
        cout << i + 1 << ". ";
        cout << "Имя студента: " << students[i].fullName << endl;
        cout << "Группа: " << students[i].groupNumber << endl;
    }
    cout << endl << "Студенты, имеющие хотя бы одну двойку" << endl;
    bool hasFailingGrade;
    bool result;
    for (int i = 0; i < numStudents; i++)
    {
        hasFailingGrade = false;
        for (int j = 0; j < 5; j++)
        {
            if (students[i].grades[j] < 3)
            {
                result = true;
                cout << i + 1 << ". ";
                cout << "Имя студента: " << students[i].fullName << endl;
                cout << "Группа: " << students[i].groupNumber << endl;
                break;
            }
        }
    }
    if (result == false)
        cout << "Нет студентов с хотя бы одной двойкой";
    return 0;
}
