
#include<stdio.h>

void strrev(char str1[],char str2[]);

main()
{
	char str1[256], str2[256];

	printf("•¶š—ñ?:");
	scanf("%s", &str1);
	printf("str1: %s\n", str1);

	strrev(str1,str2);
	printf("str2: %s\n", str2);
}

void strrev(char str1[],char str2[])
{
	int i, j;

	for (i = 0; str1[i] != '\0'; i++);

	for (i--,j = 0; i >= 0; j++, i--)
	{
		str2[j] = str1[i];
	}
	str2[j] = '\0';
}