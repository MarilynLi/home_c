#include <stdio.h>

void print_in_base(int n, int p)
{
    int divisor = 1;

    while (divisor <= n / p)
    {
        divisor *= p;
    }

    do
    {
        printf("%d", n / divisor);
        n %= divisor;
        divisor /= p;
    }
    while (divisor > 0);
}

int main(void)
{
    int n, p;

    if (scanf("%d%d", &n, &p) != 2)
    {
        return 0;
    }

    if (n < 0 || p < 2 || p > 9)
    {
        return 0;
    }

    print_in_base(n, p);
    printf("\n");

    return 0;
}