
#include<stdio.h>

main()
{
	int c;
	char dumy[256];

	printf("����(^z�ŏI��)?");
	c = getchar();

	
	while (c != EOF) 
	{
		printf("%c", c);
		printf("\n");
		gets(dumy);
		printf("����(^z�ŏI��)");
		c = getchar();
	}
}