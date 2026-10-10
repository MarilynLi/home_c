#include <stdio.h>

int N;
int reverse_string(void) 
{
    int x = N;  
    N--;

    if (N < 0)        //если строки 6-7 после if , то if (N < 1)
    {                 //иначе до печати сохранённой единицы не доходим.
        return 0;
    }
    
    printf ("%d ", x);
    reverse_string();

    return 0;

}

int main(void)
{
    scanf("%d", &N);
    reverse_string();

    return 0;
}