#include <stdio.h>

int main(void) {

    int a, n = 0;  // n - счетчик
    scanf ("%d", &a);

    while (a != 0) {
        if (a % 2 == 0) {
            n++;
        }

    scanf ("%d", &a);
    }

    printf ("%d ", n);

    return 0;
}