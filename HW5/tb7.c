#include <stdio.h>

int main(void) {

    int a, x, z;
    scanf ("%d", &a);
    while (a != 0) {
        x = a % 10;
        z = a / 10;

        while (z != 0) {
            if (z % 10 == x) {
                printf ("YES");
            return 0;
            } else {
                z /= 10;
            }
        }
        a /= 10;

    }
    printf ("NO");
    return 0;
}