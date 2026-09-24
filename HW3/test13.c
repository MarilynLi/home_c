
#include <stdio.h>

int main(void)
{
	int a;
	scanf("%d", &a);
	int F = (a/100)*(a/10%10)*(a%10);
	printf("%d", F);
	return 0;
}

