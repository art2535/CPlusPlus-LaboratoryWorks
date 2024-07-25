#include <stdio.h>
#include <math.h>
#include <locale.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    int k, K = 0;
    float x, s = 0;
    printf("Введите K: ");
    scanf_s("%d", &K);
    printf("Введите x: ");
    scanf_s("%f", &x);
    for (k = 0; k <= K; k++)
        s += pow(-2, k) * sin(k * x) / (k * k + k + 1);
    printf("Значение s = %f", s);
    return 0;
}