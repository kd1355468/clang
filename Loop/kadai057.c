
#include<stdio.h>

main()
{
	char c;
	int i;

	printf("アルファベット大文字？");
	scanf("%c", &c);

	for (i = 1; (c + i) <= 'Z'; i++)
	{
		printf("%c ", c + i);
	}
}