
#include<stdio.h>
main()
{

	int i;
	char data[6] = "Apple";

	printf("1文字ずつ表示\n");

	for (i = 0; i <= 6; i++) 
	{
		printf("%c", data[i]);
	}

	printf("\n");
	printf("文字列を表示\n%s", &data[0]);

}