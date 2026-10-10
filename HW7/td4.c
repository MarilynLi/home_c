#include <stdio.h>

void print_num(int num)
{
    if (num >= 10)
    {
        print_num(num / 10);
        printf(" ");
    }

    printf("%d", num % 10);
}

int main(void)
{
    int n;

    scanf("%d", &n); 
    if (n < 0)
    {
        return 0;
    }

    print_num(n);
    printf("\n");

    return 0;
}