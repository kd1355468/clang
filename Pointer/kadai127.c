
#include<stdio.h>

main()
{
	int i;
	double data[5] = { 10.8,20.3,30.6,40.4,50.5 };
	double* p=data, g=0;

	printf("”z—ñ‚Ì“à—e");
	printf("data[]=");

	for (i = 0; i < 5; i++);
	{
		printf("%f ",*(p+i));
		g += *(p+i);
	}

	printf("\n");

	printf("‡Œv%f\n•½‹Ï%f", g, g / i);
}