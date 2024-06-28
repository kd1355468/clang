
#include<stdio.h>
main()
{
	char* day[] = { "Sunday","Monday","Tuesday","Wednesday"
				 ,"Thursday","Friday","Saturday","NULL"};
	int i;
	char** p=day;

	//パターン1　day[i]の形式で文字列を表示
	for (i = 0; i < 7; i++)
	{
		printf("%s\n", day[i]);
	}

	printf("\n");

	//パターン2-1 *pを用いて文字列表示
	for (i = 0; i < 7; i++)
	{
		printf("%s\n", *(p + i));
	}

	printf("\n");

	//パターン2-2
	while (*p)
	{
		printf("%s\n", *p++);
	}

}