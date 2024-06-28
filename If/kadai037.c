
#include<stdio.h>

main()
{
	int su;

	printf("０から１００までの整数？");
	scanf("%d", &su);

	if (su <= 29 && su >= 0 || su < 0)
	{
		printf("その数値の判定結果は「1」です\n");
	}

	if (su >= 30 && su < 50)
	{
		printf("その数値の判定結果は「2」です\n");
	}

	if (su >= 50 && su < 80)
	{
		printf("その数値の判定結果は「3」です\n");
	}

	if (su >= 80 && su < 90)
	{
		printf("その数値の判定結果は「4」です\n");
	}

	if (su >= 90)
	{
		printf("その数値の判定結果は「5」です\n");
	}
}