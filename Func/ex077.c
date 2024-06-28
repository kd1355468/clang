
#include<stdio.h>

//関数プロトタイプ宣言
void calculat(int a, int b, int c, int *max, int *min);

main()
{
	int a, b, c, max, min;

	//入力
	printf("整数を3つ入力:");
	scanf("%d%d%d", &a, &b, &c);

	//関数呼び出し
	calculat(a, b, c, &max, &min);

	//結果表示
	printf("最大値 ＝ %d 最小値 ＝ %d", max, min);
}

//関数定義
void calculat(int a, int b, int c, int* max, int* min)
{
	*max = a;
	if (b > *max)
	{
		*max = b;
		if (c > *max)
		{
			*max = c;
		}
	}

	*min = a;
	if (b < *min)
	{
		*min = b;
		if (c < *min)
		{
			*min = c;
		}
	}
}