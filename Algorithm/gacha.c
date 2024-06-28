
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int g,i;

	srand(time(0));
	for (i = 0; i < 10; i++) {
		g = rand() % 100 + 1;

		if (g >= 50)
		{
			printf("★ ノーマルです。\n");
			printf("%d\n", g);
		}

		if (g >= 20 && g <= 49)
		{
			printf("★★ レアです。\n");
			printf("%d\n", g);
		}

		if (g >= 6 && g <= 19)
		{
			printf("★★★ Sレアです。\n");
			printf("%d\n", g);
		}

		if (g >= 2 && g <= 5)
		{
			printf("★★★★ Uレアです。\n");
			printf("%d\n", g);
		}

		if (g == 1)
		{
			printf("★★★★★ Lレアです。\n");
			printf("%d\n", g);
		}
	}
}