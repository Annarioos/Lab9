#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int tr(int a, char s);

int main(void)
{
    char s;
    int storona_a;
    int otv;
    setlocale(LC_CTYPE, ".UTF8");

    do
    {
        printf("Введите символ из которого будет строиться фигура:\n");
        scanf(" %c", &s);

        printf("Введите сторону a (высоту треугольника):\n");
        scanf("%d", &storona_a);

        printf("Перевернутый треугольник (только контур):\n\n");

        tr(storona_a, s);
        printf("\n");

        printf("Продолжить ? (Да - введите любое число, Нет - введите 0): ");
        scanf("%d", &otv);
        printf("\n");

    } while (otv != 0);
    return 0;
}

int tr(int a, char s)
{
    int r, c;
    for (r = 0; r < a; r++)
    {
        for (c = 0; c < r; c++)
        {
            printf(" ");
        }

        if (r == 0)
        {
            for (c = 0; c < (2 * a - 1); c++)
            {
                printf("%c", s);
            }
        }
        else if (r == a - 1)
        {
            printf("%c", s);
        }
        else
        {
            printf("%c", s);

            int prob = 2 * (a - r - 1) - 1;
            for (c = 0; c < prob; c++)
            {
                printf(" ");
            }
            printf("%c", s);
        }
        printf("\n");
    }
}
