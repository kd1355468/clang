
#include<stdio.h>

main()
{
	int a = 100, b = 10, * pa, * pb;

	pa = &a;
	pb = &b;

	printf("%d + %d = %d\n", a, b, *pa + *pb);
	printf("%d - %d = %d\n", a, b, *pa - *pb);
	printf("%d * %d = %d\n", a, b, *pa * *pb);
	printf("%d / %d = %d\n", a, b, *pa / *pb);
}