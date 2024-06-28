
#include<stdio.h>

main()
{
	int c;
	char dumy[256];

	printf("•¶š(^z‚ÅI—¹)?");
	c = getchar();

	
	while (c != EOF) 
	{
		printf("%c", c);
		printf("\n");
		gets(dumy);
		printf("•¶š(^z‚ÅI—¹)");
		c = getchar();
	}
}