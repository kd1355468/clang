
#include<stdio.h>
main()
{
	int i, su, g;
	i = 0;
	g = 0;
	su = 0;

	do {
		g += su;
		i++;
		printf("����(-999�ŏI��)?");
		scanf("%d",&su);
	} while (su != -999);
	i--;
	printf("���v=%d\n����=%f\n", g, (float)g / (float)i);
}