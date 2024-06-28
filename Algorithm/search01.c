
#include<stdio.h>
main()
{
	int i, d[10] = { 10,5,30,77,16,3,47,29,37,33 }, s;

	printf("探索値Sを入力:");
	scanf("%d", &s);

	//線形探索(リニアサーチ)
	for (i = 0; i < 10; i++)
	{
		if (s == d[i])
		{
			break;
		}
	}

	//結果表示
	if (i == 10) 
	{
		printf("見つからなかった\n");
	}
	else
	{
		printf("探索値%dを、d[%d]で発見\n", s,i);
	}
}