
#include<stdio.h>

main()
{
	double a, b, * pa = &a, * pb = &b;

	printf("ŽÀ”’l‚P?");
	scanf("%lf", &a);

	printf("ŽÀ”’l‚Q?");
	scanf("%lf", &b);

	if (*pa > *pb)
	{
		printf("‘å‚«‚¢•û=%lf", *pa);
	}
	if (*pb > *pa)
	{
		printf("‘å‚«‚¢•û=%lf", *pb);
	}
}