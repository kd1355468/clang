
#include<stdio.h>

main()
{
	float su1, su2;

	printf("2つの実数値？");
	scanf("%f%f", &su1, &su2);

	if (su1 > su2)
	{
		printf("大きいほうは=%f\n", su1);
	}
	else
	{
		printf("大きいほうは=%f\n", su2);
	}
}