
#include<stdio.h>
void calculat(int a, int b, int* s, float* ave);

main()
{
	int a, b, g;
	float h;

	//入力
	printf("整数を2つ入力:");
	scanf("%d%d", &a, &b);

	//関数呼び出し
	calculat(a, b, &g, &h);

	//結果表示
	printf("合計は %d、平均は %.2f\n", g, h);
}

//関数定義
void calculat(int a, int b, int* s, float* ave)
{
	*s = a + b;
	*ave = (a + b) / 2;
	return;
}