
#include<stdio.h>

main()
{
	double a, b, * pa = &a, * pb = &b;

	printf("�����l�P?");
	scanf("%lf", &a);

	printf("�����l�Q?");
	scanf("%lf", &b);

	if (*pa > *pb)
	{
		printf("�傫����=%lf", *pa);
	}
	if (*pb > *pa)
	{
		printf("�傫����=%lf", *pb);
	}
}