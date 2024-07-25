// Вариант 11. Создать в динамической памяти односвязный линейный список целых чисел.
// Добавить через один элемент в связанный список L элемент с заданным значением
#include <iostream>
using namespace std;
struct List
{
    int info;
    List* next;
};
// Функция для создания списка
void createList(List*& list)
{
    List* x = nullptr;
    char sym;
    do
    {
        list = new List;
        cout << endl << "Введите значение информационного поля: ";
        cin >> list->info;
        list->next = x;
        x = list;
        cout << "Продолжить ввод? ";
        cin >> sym;
    } while (sym == 'y');
}
// Функция для вывода списка
void printList(List* list)
{
    List* p = list;
    while (p != nullptr)
    {
        cout << p->info;
        if (p->next != nullptr)
            cout << " ";
        p = p->next;
    }
    cout << endl;
}
// функция вставки элемента в список
void insertElement(List*& list, int input, int pos)
{
    int count = 1;
    List* newElement = new List;
    newElement->info = input;
    newElement->next = nullptr;
    if (pos == 0)
    {
        newElement->next = list;
        list = newElement;
        List* current = list->next;
        while (current != nullptr && current->next != nullptr)
        {
            if (count % 2 == 0)
            {
                List* temp = new List;
                temp->info = input;
                temp->next = current->next;
                current->next = temp;
                current = temp->next;
            }
            else
                current = current->next;
            count++;
        }
    }
    else
    {
        List* current = list;
        if (current == nullptr)
            list = newElement;
        else
        {
            while (current != nullptr)
            {
                if (current->next != nullptr && count % 2 != 0)
                {
                    List* temp = new List;
                    temp->info = input;
                    temp->next = current->next;
                    current->next = temp;
                    current = temp->next;
                }
                else if (current->next == nullptr && count % 2 != 0)
                {
                    List* temp = new List;
                    temp->info = input;
                    temp->next = nullptr;
                    current->next = temp;
                    break;
                }
                else
                    current = current->next;
                count++;
            }
        }
    }
}
int main()
{
    setlocale(LC_ALL, "Rus");
    List* list = nullptr;
    cout << "Генерация списка" << endl;
    createList(list);
    int input, pos;
    cout << endl << "Сгенерированный список" << endl;
    printList(list);
    cout << endl << "Введите число, которое необходимо вставить: ";
    cin >> input;
    cout << "Выберите позицию для вставки (0 - перед первым элементом, 1 - после первого элемента): ";
    cin >> pos;
    insertElement(list, input, pos);
    cout << endl << "Итоговый список" << endl;
    printList(list);
    List* del = list;
    while (del != nullptr)
    {
        List* temp = del;
        del = del->next;
        delete temp;
    }
    return 0;
}