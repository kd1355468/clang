
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int pl, cpu;

	printf("�����o���܂���?\n(1:�O�[ 2:�`���L 3:�p�[)��");
	scanf("%d", &pl);

	if (pl == 1) {
		printf("�v���C���[�̓O�[�ł��B\n");
	}
	if (pl == 2) {
		printf("�v���C���[�̓`���L�ł��B\n");
	}
	if (pl == 3) {
		printf("�v���C���[�̓p�[�ł��B\n");
	}

	srand(time(0));
	cpu = rand() % 3 ;

	if (cpu == 0) {
		printf("�R���s���[�^�[�̓O�[�ł��B\n");
	}
	if (cpu == 1) {
		printf("�R���s���[�^�[�̓`���L�ł��B\n");
	}
	if (cpu == 2) {
		printf("�R���s���[�^�[�̓p�[�ł��B\n");
	}

	//����
	if ((pl == 1 && cpu == 1)
		|| (pl == 2 && cpu == 2)
		|| (pl == 3 && cpu == 0))
	{
		printf("�v���C���[�̏����ł��B");
	}

	//����
	if ((pl == 1 && cpu == 2)
		|| (pl == 2 && cpu == 0)
		|| (pl == 3 && cpu == 1))
	{
		printf("�v���C���[�̕����ł��B");
	}

	//������
	if ((pl == 1 && cpu == 0)
		|| (pl == 2 && cpu == 1)
		|| (pl == 3 && cpu == 2))
	{
		printf("�������ł��B");
	}
}