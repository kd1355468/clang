
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int i, k;

	srand(time(0));

	k = rand() % (100 - 1 + 1) + 1;

	if (k <= 30)
	{
		printf("��S�̈ꌂ\n");
	}
	else
	{
		printf("�ʏ�U��\n");
	}
}