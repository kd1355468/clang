
#include<stdio.h>
main()
{
	int a = 100, b = 200, w;
	int *p_a, *p_b;          //�|�C���^�ϐ�

	printf("���s�O:a = %d  b = %d\n", a, b);

	p_a = &a;               //a�̃A�h���X���Z�b�g
	p_b = &b;               //b�̃A�h���X���Z�b�g

	//����ւ�
	w = *p_a;
	*p_a = *p_b;
	*p_b = w;

	printf("���s��:a = %d  b = %d\n", a, b);
}