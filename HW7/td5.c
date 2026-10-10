#include <stdio.h>

void print_bin(int n)
{
    if (n >= 2)
    {
        print_bin(n / 2);
    }

    printf("%d", n % 2);
}

int main(void)
{
    int n;
    scanf("%d", &n);
    if (n < 0)
    {
        return 0;
    }

    print_bin(n);
    printf("\n");

    return 0;
}