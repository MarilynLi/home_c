
#include <stdio.h>

int main(void)
{
	int a, b, c, d, e, max;
	scanf ("%d %d %d %d %d", &a, &b, &c, &d, &e);
	max = a > b ? a : b;
	max = max > c ? max : c;
	max = d > max ? d : max;
	max = e > max ? e : max;
	printf ("%d", max);
	
	return 0;
}

// альтернативное решение
// используем цикл for, введем счетчик i 

#include <stdio.h>

int main(void)
{
	int x, max;
	scanf ("%d", &max);
	
	for (int i=0; i<4; i++) {
		scanf ("%d", &x);
		if (max < x) {
			max = x; 
		}
	}
	printf("%d", max);
	
	return 0;
}

