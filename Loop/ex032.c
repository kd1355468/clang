
#include<stdio.h>
main()
{
	int s, k;

	printf("数を入れて:");
	scanf("%d", &s);

	for (k = 1; k <= 5; k++) {
		printf("%d ", s * k);
	}
}