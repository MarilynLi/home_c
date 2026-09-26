
#include <stdio.h>

int main(void)
{
	int a, b, c;
	scanf ("%d %d %d", &a, &b, &c);
	printf ("%s\n", a >= 1 && b >=1 && c >=1 && 
	a + b > c && b + c > a && a + c > b ? "YES" : "NO");
	
	return 0;
}

