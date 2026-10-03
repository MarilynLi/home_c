#include <stdio.h>

int main(void) {

    int a, n = 1, sum = 0, next = 0;
    scanf ("%d", &a);
    printf("%d ", n);

    for (int i = 1; i < a; i++) {
        next = sum + n;
        printf("%d ", next);
        sum = n;
        n = next;
    }

    return 0;
}
// 1 1 2 3 5 8 13 21 34 55