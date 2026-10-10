#include <stdio.h>

unsigned long long present (int n) {
    unsigned long long x = 1;

    if (n == 1) {
        return x;
    }
    else {
    for (int i = 2; i <= n; i++){
       x = x + x; 
    }
    return x;
}
}


int main(void) {
    int n;
    scanf("%d", &n);
    printf("%llu", present(n));
    return 0;
}