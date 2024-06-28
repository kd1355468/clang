
#include<stdio.h>

#define SIZE 5

main()
{
	int i, j, w, d[SIZE] = { 30,7,25,16,10 };


	printf("®—ñ‘O ");

	for (i = 0; i < SIZE; i++)
	{
		printf("%d ", d[i]);
	}

	printf("\n");

	//Šî–{‘}“ü–@(¸‡)
	for (i = 1; i < 5; i++)
	{
		for (j = i - 1; j >= 0; j--)
		{
			if (d[j + 1] >= d[j])
			{
				break;
			}
			else
			{
				w = d[j + 1];
				d[j + 1] = d[j];
				d[j] = w;
			}
		}
	}

	printf("®—ñŒã ");

	for (i = 0; i < SIZE; i++)
	{
		printf("%d ", d[i]);
	}
}