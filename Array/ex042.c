
#include<stdio.h>
main()
{

	int i;
	char data[6] = "Apple";

	printf("1�������\��\n");

	for (i = 0; i <= 6; i++) 
	{
		printf("%c", data[i]);
	}

	printf("\n");
	printf("�������\��\n%s", &data[0]);

}