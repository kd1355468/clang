
#include<stdio.h>

main()
{
	char *c,d[259];

	printf("文字列入力＞");
	c = gets(d);

	while (c != NULL)
	{
		printf("入力されたのは%s\n", c);
		printf("文字列入力＞");
		c = gets(d);
	}
}