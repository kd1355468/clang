
#include<stdio.h>

main()
{
	int su;

	printf("整数？");
	scanf("%d", &su);

	if ( su %2==0 )
	{
		printf("その数は偶数です");
	}
	else
	{
		printf("その数は奇数です");
	}
}