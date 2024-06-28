
#include<stdio.h>
main()
{
	int a = 100, b = 200, w;
	int *p_a, *p_b;          //ポインタ変数

	printf("実行前:a = %d  b = %d\n", a, b);

	p_a = &a;               //aのアドレスをセット
	p_b = &b;               //bのアドレスをセット

	//入れ替え
	w = *p_a;
	*p_a = *p_b;
	*p_b = w;

	printf("実行後:a = %d  b = %d\n", a, b);
}