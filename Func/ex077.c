
#include<stdio.h>

//�֐��v���g�^�C�v�錾
void calculat(int a, int b, int c, int *max, int *min);

main()
{
	int a, b, c, max, min;

	//����
	printf("������3����:");
	scanf("%d%d%d", &a, &b, &c);

	//�֐��Ăяo��
	calculat(a, b, c, &max, &min);

	//���ʕ\��
	printf("�ő�l �� %d �ŏ��l �� %d", max, min);
}

//�֐���`
void calculat(int a, int b, int c, int* max, int* min)
{
	*max = a;
	if (b > *max)
	{
		*max = b;
		if (c > *max)
		{
			*max = c;
		}
	}

	*min = a;
	if (b < *min)
	{
		*min = b;
		if (c < *min)
		{
			*min = c;
		}
	}
}