#include <stdio.h>

int main(void)
{
    int a, n = 1, kv, kb;
    scanf ("%d", &a);
    while (n <= a) {
        printf ("%d %d %d\n", n, n*n, n*n*n);
        n++;
    }

    return 0;
}