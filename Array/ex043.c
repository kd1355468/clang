
#include<stdio.h>
main()
{

	int i;
	char data[] = "orange";

	printf("文字列:%s\n", &data[0]);

	for (i = 0; data[i] != '\0'; i++);

	printf("文字数は%dです\n", i);

}