
#include<stdio.h>

main()
{
	char *c,d[259];

	printf("��������́�");
	c = gets(d);

	while (c != NULL)
	{
		printf("���͂��ꂽ�̂�%s\n", c);
		printf("��������́�");
		c = gets(d);
	}
}