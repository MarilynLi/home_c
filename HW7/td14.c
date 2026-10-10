#include <stdio.h>


int reverse_string(void) 
{
    int N;
    scanf ("%d", &N);

    if (N == 0)        
    {                 
        return 0;
    }

    if (N % 2 == 0)
    {
    return reverse_string();
    }
    
    //| scanf("%d", &N) != 1
    
    printf ("%d ", N);
    return reverse_string();
    
}

int main(void)
{
    reverse_string();

    return 0;
}