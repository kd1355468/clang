
#include<stdio.h>
main()
{
	int su, g;
	g = 0;
	su = 0;

	while (1) {
		g += su;
		printf("数を入れて");
		scanf("%d", &su);
		if (su == -999)break;
	}
	printf("合計=%d\n", g);
}