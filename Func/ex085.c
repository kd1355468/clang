
#include<stdio.h>
#define SIZE 256

void linking(char *a, char *b);

main()
{
	char a[SIZE], b[SIZE];

	printf("”z—ñ a :");
	scanf("%s", &a[0]);

	printf("”z—ñ b :");
	scanf("%s", &b[0]);

	linking(a, b);

	printf("”z—ñ a :%s\n", a);
}

void linking(char *a, char *b)
{
	int i, j;

	for (i = 0; *(a+i) != '\0'; i++);

	for (j = 0; *(b+j) != '\0'; j++, i++)
	{
		*(a+i) = *(b+j);
	}
	*(a + i) = '\0';
}