
#include<stdio.h>
main()
{
	char* p_gama[3] = { "wii","ds","playstation4" };
	int i;
	char** p;

	p = p_gama;   //ポインタにポインタ配列の先頭アドレスを代入

	for (i = 0; i < 3; i++)
	{
		printf("%s\n", *p++);
	}

	//アドレス確認用
	p = p_gama;
	printf("p_game[0]:%d\n", p_gama[0]);
	printf("p_game[1]:%d\n", p_gama[1]);
	printf("p_game[2]:%d\n", p_gama[2]);
	printf("       *p:%d\n", *p       );
	printf("   *(p+1):%d\n", *(p + 1  );
	printf("   *(p+2):%d\n", *(p + 2  );
	printf("*p_game[0]:%d\n",*p_gama[0]);
	printf("      **p:%d\n", **p      );
}