
#include<stdio.h>
main()
{
	int a[] = { 11,22,33,44,55,66 };
	int i, * p_a;
	float b[] = { 11.1,22.2,33.3,44.4 };
	float* p_b, sum = 0, ave = 0;

	p_a = a;

	for (i = 0; i < 6; i++)
	{
		sum += *p_a;
		p_a++;
	}

	ave += sum / i;   //½Ï
	printf("zña v = %.0f ½Ï = %.3f\n\n", sum, ave);

	p_b = b;
	sum = 0;
	ave = 0;

	for (i = 0; i < 4; i++)
	{
		sum += *p_b;
		p_b++;
	}

	ave += sum / i;
	printf("zñb v = %.3f ½Ï =%.3f\n", sum,ave);

}