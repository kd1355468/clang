
#include<stdio.h>

main()
{
	char c;
	int i;

	printf("アルファベット小文字？");
	scanf("%c", &c);

	for (i = 1; (c + i) <= 'z'; i++)
	{
		printf("%c ", c + i);
	}
}