
#include<stdio.h>

main()
{
	int su;

	printf("�O����P�O�O�܂ł̐����H");
	scanf("%d", &su);

	if (su <= 29 && su >= 0 || su < 0)
	{
		printf("���̐��l�̔��茋�ʂ́u1�v�ł�\n");
	}

	if (su >= 30 && su < 50)
	{
		printf("���̐��l�̔��茋�ʂ́u2�v�ł�\n");
	}

	if (su >= 50 && su < 80)
	{
		printf("���̐��l�̔��茋�ʂ́u3�v�ł�\n");
	}

	if (su >= 80 && su < 90)
	{
		printf("���̐��l�̔��茋�ʂ́u4�v�ł�\n");
	}

	if (su >= 90)
	{
		printf("���̐��l�̔��茋�ʂ́u5�v�ł�\n");
	}
}