
#include<stdio.h>
main()
{
	int a = 100, b = 200;
	int *p_a, *p_b, *p_w;          //�|�C���^�ϐ�

	p_a = &a;               //a�̃A�h���X���Z�b�g
	p_b = &b;               //b�̃A�h���X���Z�b�g

	printf("���s�O:*p_a = %d  *p_b = %d\n", *p_a, *p_b);
	printf("�A�h���X:p_a=%d p_b%d\n\n", p_a, p_b);

	//����ւ�
	p_w = p_a;
	p_a = p_b;
	p_b = p_w;

	printf("���s��:*p_a = %d  *p_b = %d\n", *p_a, *p_b);
	printf("�A�h���X:p_a=%d p_b%d\n", p_a, p_b);
}