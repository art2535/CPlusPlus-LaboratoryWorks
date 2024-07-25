/* Вариант 11. Дана строка. Словом текста считается любая последовательность букв латинского алфавита; 
между соседними словами – не менее одного пробела, за последним словом – точка. 
Найти и сохранить в строке те слова текста, количество гласных букв в которых превышает количество согласных. 
Все остальные слова удалить. */
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    string text;
    cout << "Введите строку: ";
    getline(cin, text);
    int pos = 0, i = 0;
    int word_length;
    string words = "eyuioa";
    string words2 = "qwrtplkjhgfdszxcvbnm";
    int pos1 = 0;
    text[text.size() - 1] = ' ';
    while (i < text.size())
    {
        if (text[i] == ' ' && (i == 0 || text[i - 1] == ' '))
            text.erase(i, 1);
        else
            i++;
    }
    while ((pos = text.find(' ', pos1)) != string::npos)
    {
        int count_glasn = 0;
        int count_sogl = 0;
        pos++;
        string word = text.substr(pos1, pos - pos1);
        word_length = word.length();
        for (int i = 0; i < word.length(); i++)
        {
            for (int j = 0; j < words.length(); j++)
            {
                if (word[i] == words[j])
                    count_glasn++;
            }
            for (int k = 0; k < words2.length(); k++)
            {
                if (word[i] == words2[k])
                    count_sogl++;
            }
        }
        if (count_sogl >= count_glasn)
        {
            word.erase(0, word_length);
            text.erase(pos - word_length, word_length);
            pos = 0;
        }
        else
            pos1 = pos + 1;
    }
    cout << "Новая строка: " << text << "." << endl;
    return 0;
}