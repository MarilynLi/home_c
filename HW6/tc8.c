#include <stdio.h>

int main(void) 
{
    for (char c = getchar(); c != '.' && c != '\n'; c = getchar()) 
    {
        if (c >= 'a' && c <= 'z') 
        {
            putchar(c - 0x20);
        } 
        else 
        {
            putchar(c);
        }
    }

    return 0;
}

//Это нужно, когда регистр букв не должен влиять на работу программы.