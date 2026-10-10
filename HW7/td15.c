#include <stdio.h>

int max_find(int max)
{
    int N;
    scanf ("%d", &N);

    if (N == 0) 
    {
        printf ("%d", max);
        return 0;
    }

    if (N >= max)
    {
        max = N;
        return max_find (max);
    }

    if (N < max)
    {
    return max_find (max);
    }

    return 0;
}

int main()
{
    int max;
    scanf ("%d", &max);
    max_find(max);

    return 0;
}
