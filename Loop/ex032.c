
#include<stdio.h>
main()
{
	int s, k;

	printf("��������:");
	scanf("%d", &s);

	for (k = 1; k <= 5; k++) {
		printf("%d ", s * k);
	}
}