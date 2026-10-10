#include <stdio.h>
 int digit_to_num (char c) {
    return 0;
}

int main(void) {
    int c;
    int sum = 0;
    while ((c = getchar()) != '\n') {
    if (c >= '0' && c <= '9') {
        sum = sum + (c - '0');
    }
}
    printf("%d", sum);
}