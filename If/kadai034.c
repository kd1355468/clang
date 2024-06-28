
#include<stdio.h>

main()
{
	char moji;

	printf("アルファベット？");
	scanf("%c", &moji);

	if (moji >= 'A' && moji <= 'Z')
	{
		printf("その文字は「大文字」です\n");
	}

	if (moji >= 'a' && moji <= 'z')
	{
		printf("その文字は「小文字」です\n");
	}

	//エラー表示
	if (moji >= '!' && moji <= '@')
	{
		printf("ERROR");
	}
	if (moji >= '[' && moji <= '`')
	{
		printf("ERROR");
	}
	if (moji >= '{' && moji <= '~')
	{
		printf("ERROR");
	}
}