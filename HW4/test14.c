

#include <stdio.h>

int main(void)
{
	int a;
	scanf ("%d", &a);
	int b = a/100, c = a/10 % 10, d = a % 10, max = b;
	max = max < c ? c : max;
	max = max < d ? d : max;
	printf ("%d", max);
	
	return 0;
}

