
#include<stdio.h>

main()
{
	int data[10] = { 10,20,30,40,50,60,70,80,-999 };
	int* p = data, i;

	printf("�|�C���^���Œ�ŕ\��\n");
	printf("�z�� data[]=");

	for (i = 0; *(p+i) != -999; i++)
	{
		printf("%d,", *(p + i));
	}

	printf("\n\n");

	printf("�|�C���^��ω������ĕ\��\n");
	printf("�z�� data[]=");

	while (*p != -999)
	{
		printf("%d,", *p++);
	}
}