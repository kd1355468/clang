
#include<stdio.h>
void calculat(int a, int b, int* s, float* ave);

main()
{
	int a, b, g;
	float h;

	//����
	printf("������2����:");
	scanf("%d%d", &a, &b);

	//�֐��Ăяo��
	calculat(a, b, &g, &h);

	//���ʕ\��
	printf("���v�� %d�A���ς� %.2f\n", g, h);
}

//�֐���`
void calculat(int a, int b, int* s, float* ave)
{
	*s = a + b;
	*ave = (a + b) / 2;
	return;
}