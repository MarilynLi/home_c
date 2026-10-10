#include <stdio.h>

//void не возвращает значение в функцию, int - возвращает

void num(int n)     //или int num(int n)
{
    if (n == 0)
    {
        return;    //тогда return 1;
    }

    num(n - 1);
    printf(" %d", n);
    
}

int main(void)
{
    int n;
    scanf("%d", &n);
    num(n);
}