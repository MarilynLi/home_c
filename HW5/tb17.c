#include <stdio.h>

int main(void) {

    int n, a, sum, prod; // в sum и prod кладем сумму и произведение чисел
    scanf ("%d", &n);

    for (int i = 10; i <= n; i++) {
        a = i;
        sum = 0;
        prod = 1;

        while (a != 0) {
            int d = a % 10;
            sum = sum + d;
            prod = prod * d;
            a /= 10;
        }
        if (sum == prod) {
            printf ("%d ", i);
            }
    }

    return 0;
}