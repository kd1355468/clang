
#include<stdio.h>

main()
{
	int c;
	char dumy[256];

	printf("文字(^zで終了)?");
	c = getchar();

	
	while (c != EOF) 
	{
		printf("%c", c);
		printf("\n");
		gets(dumy);
		printf("文字(^zで終了)");
		c = getchar();
	}
}