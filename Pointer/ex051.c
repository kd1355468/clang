
#include<stdio.h>
main()
{
	int a = 50, b = 10, c;
	int* p_a, * p_b;       //�|�C���^�ϐ�

	p_a = &a;              //a�̃A�h���X���Z�b�g
	p_b = &b;              //b�̃A�h���X���Z�b�g

	c = *p_a + *p_b;       //���g+���g

	printf("%d + %d = %d", a, b, c);
}