#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

#define ROW 9
#define COL 9    
#define V_ROW 5

int pif(int r, int c);
int mat(int r);
long long summa(long long num);

int main(void)
{
    setlocale(LC_CTYPE, ".UTF8");
    int r, c;
    long long n;
    long long s;
    char otv;

    printf("Задание 1. Таблица умножения\n");
    for (r = 1; r <= ROW; r++)
    {
        for (c = 1; c <= COL; c++)
        {
            printf("%5d", pif(r, c));
        }
        printf("\n");
    }
    printf("\n");

    printf("Задание 1.2. Левый нижний треугольник\n");
    for (r = 1; r <= ROW; r++)
    {
        for (c = 1; c <= r; c++)
        {
            printf("%5d", pif(r, c));
        }
        printf("\n");
    }
    printf("\n");

    printf("Задание 1.3. Вариант 9\n");
    for (r = 1; r <= V_ROW; r++)
    {
        for (c = 1; c <= (6 - r); c++)
        {
            printf("%5d", mat(r));
        }
        printf("\n");
    }
    printf("\n");

    printf("Задание 2. Сумма четных цифр, исключая последнюю (Вариант 9)\n");

    do
    {
        printf("Введите целое число: ");
        scanf("%lld", &n);

        s = summa(n);
        printf("Сумма четных цифр (без последней): %lld\n", s);

        printf("Продолжить? (Да - y, нет - n): ");
        scanf(" %c", &otv);
        printf("\n");

    } while (otv == 'y' || otv== 'Y');

    return 0;
}

int pif(int r, int c)
{
    return r * c;
}

int mat(int r)
{
    return r * 5;
}

long long summa(long long num)
{
    long long sum = 0;

    num /= 10;

    while (num > 0)
    {
        int k = num % 10;
        if (k % 2 == 0)
        {
            sum += k;
        }
        num /= 10;
    }
    return sum;
}