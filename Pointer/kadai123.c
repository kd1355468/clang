
#include<stdio.h>

main()
{
	double a, b, * pa = &a, * pb = &b;

	printf("実数値１?");
	scanf("%lf", &a);

	printf("実数値２?");
	scanf("%lf", &b);

	if (*pa > *pb)
	{
		printf("大きい方=%lf", *pa);
	}
	if (*pb > *pa)
	{
		printf("大きい方=%lf", *pb);
	}
}