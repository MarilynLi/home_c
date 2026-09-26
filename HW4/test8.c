
#include <stdio.h>

int main(void)
{
	int x, y, z, max;
	scanf("%d %d %d", &x, &y, &z);
	max = x > y ? x : y;
	z > max ? printf ("%d", z) : printf ("%d", max)
	
	return 0;
}

