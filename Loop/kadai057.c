
#include<stdio.h>

main()
{
	char c;
	int i;

	printf("�A���t�@�x�b�g�啶���H");
	scanf("%c", &c);

	for (i = 1; (c + i) <= 'Z'; i++)
	{
		printf("%c ", c + i);
	}
}