
#include<stdio.h>
main()
{
	int i, su;

	printf("”‚ÍH");
	scanf("%d", &su);
	do {
		i = 0;
		do {
			printf("*");
			i++;
		} while (i < 5);
		printf("\n");
		su--;
	} while (su > 0);
}