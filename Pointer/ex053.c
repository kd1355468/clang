
#include<stdio.h>
main()
{
	int a = 100, b = 200;
	int *p_a, *p_b, *p_w;          //ポインタ変数

	p_a = &a;               //aのアドレスをセット
	p_b = &b;               //bのアドレスをセット

	printf("実行前:*p_a = %d  *p_b = %d\n", *p_a, *p_b);
	printf("アドレス:p_a=%d p_b%d\n\n", p_a, p_b);

	//入れ替え
	p_w = p_a;
	p_a = p_b;
	p_b = p_w;

	printf("実行後:*p_a = %d  *p_b = %d\n", *p_a, *p_b);
	printf("アドレス:p_a=%d p_b%d\n", p_a, p_b);
}