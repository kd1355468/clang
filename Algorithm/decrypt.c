
#include<stdio.h>
main()
{
	int i;
	char s[50];

	printf("暗号化文字列を入力してください>");
	scanf("%s", &s[0]);

	for (i = 0; s[i] != '\0'; i++)
	{
		s[i] = s[i] - 1;
	}

	printf("複号済み文字列は、%s\n", &s[0]);
}