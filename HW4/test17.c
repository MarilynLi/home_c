
#include <stdio.h>

int main(void)
{
	int a;
	scanf ("%d", &a);
	if (a == 12 || a <= 2) {
	    printf ("winter");
	} 
	else if (a <= 5) {
		printf ("spring"); 
		}
	else if (a <= 8) {
		printf ("summer"); 
		}
	else { printf ("autumn"); 
		}
	
	return 0;
}

