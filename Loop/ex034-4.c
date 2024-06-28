
#include<stdio.h>
main()
{
	int i, su, j, k;
	j = 0;

	printf("”‚ÍH");
	scanf("%d", &su);

	do {
		i = 0;
		k = 0;

		do {
			printf(" ");
			k++;
		} while (k < su);

		do {
			printf("*");
			i++;
		} while (i < j + 1);

		printf("\n");
		su--;
		j++;

	} while (su > 0);
}