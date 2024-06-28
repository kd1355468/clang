
#include<stdio.h>

main()
{
	int ret, cnt, su, g=0;

	printf("®”(~z‚ÅI—¹)?");
	ret = scanf("%d", &su);

	for (cnt = 0; su != EOF; cnt++)
	{
		g += su;
		printf("®”(~z‚ÅI—¹)?");
		ret = scanf("%d", &su);
	}

	printf("‡Œv%d\n•½‹Ï%f", su, (float)su / cnt);
}