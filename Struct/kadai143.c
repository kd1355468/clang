
#include<stdio.h>
int AlphaCheck(char cdat);

main()
{
	char c;
	int ret;

	printf("�A���t�@�x�b�g1�����H");
	scanf("%c", &c);

	ret = AlphaCheck(c);

	if (ret == 1)
	{
		printf("�߂�l��%d�Ȃ̂œ��͂��������͑啶���ł�\n", ret);
	}
	else
	{
		printf("�߂�l��%d�Ȃ̂œ��͂��������͏������ł�\n", ret);
	}
}

int AlphaCheck(char cdat)
{
	if (cdat >= 0x41 && cdat <= 0x5A)
	{
		return(1);
	}
	else if (cdat >= 0x61 && cdat <= 0x7A)
	{
		return(0);
	}
}

