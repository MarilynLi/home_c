
#include <stdio.h>

int main(void)
{
	int a, b, max;
	scanf("%d %d", &a, &b);
	max = a < b ? printf("%d %d", a, b) : printf("%d %d", b, a);
	
	return 0;
}

