#include <stdio.h>

void rec(int n) {
    if (n > 0) {
        printf ("%d ", n % 10); //напечатаем после rec(n /10) - вернет 1 0 0
        rec(n /10);
    }
}
int main (void) {
    int n;
    scanf ("%d", &n);
    rec(n);
}
