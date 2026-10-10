#include <stdio.h>

//рекурсивная функция
int num(int n) 
{
    if (n == 1) 
    {
        return n;
    }
    return n + num(n - 1);
}

int main() 
{
    int n;
    scanf("%d", &n);
    printf ("%d", num(n));
}

//не рекурсивный вариант
//через функцию и цикл
//int num(int b)
//{
//    int a = 1;
//    int sum = 0;
//    while (a <= b) 
//    {
//        sum = sum + a;
//        a++;
//    }
//    return sum;
//}

//int main() 
//{
//    int b;
//    scanf ("%d", &b);
//    printf ("%d", num(b));

//    return 0;
//}