
#include<stdio.h>

main()
{
	char c, * c_p = &c;

	printf("1�������́H");
	scanf("%c", &c);

	printf("���̕�����%c\n", *c_p + 1);
}