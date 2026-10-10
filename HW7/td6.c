#include <stdio.h>

void reverse_string() 
{
    int a;
    a = getchar();

    if (a == '.' || a == '\n') 
    {
        return;
    }
    reverse_string();
    putchar(a);

    return;

}

int main(void)
{
    reverse_string();
    return 0;
}

// вариант с использованием scanf

// void reverse_string()
// {
//    char c;
//    scanf ("%c", &c);
//    if (c == '.' || c == '\n')
//    {
//        return;
//    }
//    reverse_string();
//    printf("%c", c);
// }

// int main (void)
// {
//    reverse_string();

//    return 0;
// }
