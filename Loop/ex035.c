
#include<stdio.h>
main()
{
	int su, g;
	g = 0;
	su = 0;

	while (1) {
		g += su;
		printf("��������");
		scanf("%d", &su);
		if (su == -999)break;
	}
	printf("���v=%d\n", g);
}