#include <stdio.h>

int main(void)
{
    int a, b;
    // printf ("Введите числа: ");
    scanf ("%d %d", &a, &b);
    int sum = 0;
    while (a <= b){
        sum+= a * a;
        a++;
    }
    printf("%d", sum);

    return 0;
}