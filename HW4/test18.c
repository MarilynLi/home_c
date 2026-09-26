
#include <stdio.h>

int main(void)
{
	int a, b;
	scanf ("%d %d", &a, &b);
	if (a == b) {
		printf ("Equal");
	}
	else {
		printf ("%s", a > b ? "Above" : "Less");
	}
	
	return 0;
}

