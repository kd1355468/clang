
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i, data[20], targat, work;

	//���
	for (i = 0; i < 20; i++)
	{
		data[i] = i + 1;
	}

	//����ւ��O�m�F�p
	printf("\n-----------------\n");
	for (i = 0; i < 20; i++)
	{
		printf("data[%2d] = %2d\n", i, data[i]);
	}

	//�V���b�t��1
	/*srand(time(0));

	for (i = 0; i < 20; i++)
	{
		targat = rand() % 20;

		work = data[i];
		data[i] = data[targat];
		data[targat] = work;
	}*/

	//�V���b�t��2
	srand(time(0));
	for (i = 19; i > 0; i--)
	{
		targat = rand() % i;

		work = data[i];
		data[i] = data[targat];
		data[targat] = work;
	}

	//����ւ���m�F
	printf("\n-----------------\n");
	for (i = 0; i < 20; i++)
	{
		printf("data[%2d] = %2d\n", i, data[i]);
	}
}