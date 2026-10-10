#include <stdio.h>

int f(int x)
{
    if (x < -2)
    {
        return 4;
    }

    if (x < 2 && x >= -2)
    {
        return x * x;
    }

    return x * x + 4 * x + 5;
}

int main(void)
{
    int x;
    int max = 0;

    while (scanf("%d", &x) == 1 && x != 0)
    {
        int value = f(x);

        if (value > max)
        {
            max = value;
        }
    }

    printf("%d\n", max);
    return 0;
}