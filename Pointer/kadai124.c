
#include<stdio.h>

main()
{
	char c, * c_p = &c;

	printf("1文字入力？");
	scanf("%c", &c);

	printf("次の文字は%c\n", *c_p + 1);
}