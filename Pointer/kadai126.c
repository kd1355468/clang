
#include<stdio.h>

main()
{
	int data[10] = { 10,9,1,20,45,21,38,45,88 };
	int* p_data=data, max=data[0], min=data[0], i;

	printf("�z��̓��e\n");
	printf("data[]=");

	for (p_data=data; *p_data; *p_data++)
	{
		printf("%d,", *p_data);
	}

	printf("\n");

	for (p_data=data; *p_data; *p_data++)
	{
		if (max < *p_data)
		{
			max = *p_data;
		}
	}

	for (p_data=data; *p_data; *p_data++)
	{
		if (min > *p_data)
		{
			min = *p_data;
		}
	}

	printf("�ő�l��%d\n�ŏ��l��%d\n", max, min);
}