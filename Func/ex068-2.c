
#include<stdio.h>

main()
{
	char *c,d[259];

	printf("•¶š—ñ“ü—Í„");
	c = gets(d);

	while (c != NULL)
	{
		printf("“ü—Í‚³‚ê‚½‚Ì‚Í%s\n", c);
		printf("•¶š—ñ“ü—Í„");
		c = gets(d);
	}
}