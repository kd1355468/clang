
#include<stdio.h>
main()
{
	char a, b;
	int no;

	printf("出席番号:");
	scanf("%*5c%d", &no);
	printf("番号:%d\n", no);

	printf("入力:1");
	scanf("%*c%c", &a);
	printf("入力1は%c", a);
}