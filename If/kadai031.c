
#include<stdio.h>

main()
{
	float su1, su2;

	printf("2�̎����l�H");
	scanf("%f%f", &su1, &su2);

	if (su1 > su2)
	{
		printf("�傫���ق���=%f\n", su1);
	}
	else
	{
		printf("�傫���ق���=%f\n", su2);
	}
}