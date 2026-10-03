#include <stdio.h>

int main(void)
{
    int a;
    scanf ("%d", &a);
    while (a/10 !=  0) {
        if ((a/10) % 10 == a % 10) {
            printf ("YES");
        return 0;
        }
        a /= 10;
        }
    printf("NO");

    return 0;
}