
#include<stdio.h>
main()
{
	int  i;
	float box[3], su;

	for (su = 0, i = 0; i <3; i++) {
		printf("実数を入力:");
		scanf("%f", &box[i]);
		su += box[i];
	}

	printf("合計は%.2fです\n平均は%.2fです\n", su, su / 3);
}