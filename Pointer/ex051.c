
#include<stdio.h>
main()
{
	int a = 50, b = 10, c;
	int* p_a, * p_b;       //ポインタ変数

	p_a = &a;              //aのアドレスをセット
	p_b = &b;              //bのアドレスをセット

	c = *p_a + *p_b;       //中身+中身

	printf("%d + %d = %d", a, b, c);
}