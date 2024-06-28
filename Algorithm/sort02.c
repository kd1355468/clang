
#include<stdio.h>

#define SIZE 5

main()
{
	int i, j, w, d[SIZE] = { 30,7,25,16,10 };


	printf("整列(バブルソート)前 ");

	for (i = 0; i < SIZE; i++)
	{
		printf("%d ", d[i]);
	}

	printf("\n");

	//バブルソート(昇順)
	for (i = SIZE-1; i > 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			if (d[j] > d[j + 1])
			{
				w = d[j];
				d[j] = d[j + 1];
				d[j + 1] = w;
			}
		}
	}

	printf("整列(バブルソート)後 ");

	for (i = 0; i < SIZE; i++)
	{
		printf("%d ", d[i]);
	}
}