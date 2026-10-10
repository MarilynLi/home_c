#include <stdio.h>

int A, B, x;

int reverse_string(void)
{
    if (A == B)
    {
        printf("%d ", A);
        return 0;
    }

    if (A < B)
    {
        x = A;
        A++;

        printf("%d ", x);
        reverse_string();

        return 0;
    }

    if (A > B)
    {
        x = A;
        A--;

        printf("%d ", x);
        reverse_string();

        return 0;
    }

    return 0;
}

int main(void)
{
    scanf("%d %d", &A, &B);
    reverse_string();

    return 0;
}