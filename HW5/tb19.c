#include <stdio.h>

int main(void) {

    int a, sum = 0;
    scanf ("%d", &a);
    while (a != 0) {
        sum += a % 10;
        a /= 10;
    }

    printf ("%s", sum == 10 ? "YES" : "NO");
    return 0;
}