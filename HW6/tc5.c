#include <stdio.h>

//вариант с использованием формулы
int sum (int N) {
return N = N * (N + 1)/2;
}

int main(void) {
    int N;
    scanf("%d", &N);
    printf("%d", sum(N));
    return 0;
}


//вариант с использованием цикла
int sum (int N) {
    int x = 0;
    for (int i = 0; i <= N; i++){
        x = x + i;
    }
    return x;
}

int main(void) {
    int N;
    scanf("%d", &N);
    printf("%d", sum(N));
    return 0;
}
