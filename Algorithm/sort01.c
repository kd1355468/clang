
#include<stdio.h>

#define SIZE 5  //�z��̃T�C�Y

main()
{
	int i, j, w, d[SIZE] = { 30,7,25,16,10 };

	printf("����(�����\�[�g)�O " );

	for (i = 0; i < SIZE; i++)
	{
		printf("%d ", d[i]);
	}

	printf("\n");
	printf("����(�����\�[�g)�� ");

	//��{�I��@(����)
	for (i = 0; i < SIZE - 1; i++)
	{
		for (j = i + 1; j < SIZE; j++)
		{
			if (d[i] > d[j])
			{
				w = d[i];
				d[i] = d[j];
				d[j] = w;
			}
		}
	}

	for (i = 0; i < SIZE; i++)
	{
		printf("%d ", d[i]);
	}
}