
#include<stdio.h>

main()
{
	char c;
	int i;

	printf("�A���t�@�x�b�g�������H");
	scanf("%c", &c);

	for (i = 1; (c + i) <= 'z'; i++)
	{
		printf("%c ", c + i);
	}
}