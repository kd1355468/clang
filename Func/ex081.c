
#include<stdio.h>
#define SIZE 8

int max(int* deta1);
int min(int* deta2);

main()
{
	int data[SIZE] = { 6,10,8,2,9,5,1,7 }, a, b;

	a = max(data);
	printf("Å‘å’l= %d\n\n", a);

	b = min(data);
	printf("Å¬’l= %d\n", b);
}

int max(int* deta1)
{
	int i, max;
	
	for (max = *deta1,i = 0; i < SIZE; i++)
	{
		if (*(deta1+i) > max)
		{
			max = *(deta1+i);
		}
	}
	return max;
}

int min(int* deta2)
{
	int i, min;

	for (min = *deta2,i = 0; i < SIZE; i++)
	{
		if (*(deta2+i) < min)
		{
			min = *(deta2+i);
		}
	}
	return min;
}