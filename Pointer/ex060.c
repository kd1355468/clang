
#include<stdio.h>
main()
{
	char data[15] = "Language",ch,*p_data;
	int i;
	p_data = data;

	printf("data[]=%s\n", data);
	printf("検索文字は？");
	scanf("%c", &ch);
	printf("検索結果は、");

	for (i = 0; *(p_data + i) != '\0'; i++) 
	{
		if (ch == *(p_data + i))
		{
			printf("%d ", i + 1);
		}
	}

	printf("文字目です。\n");
}