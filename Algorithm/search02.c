
#include<stdio.h>
main()
{
	int d[11] = { 10,5,30,77,16,3,47,29,37,33,55 }, i, s;

	for (i = 0; i < 10; i++)
	{
		printf("%02d ", d[i]);
	}
    
	printf("\n�T���lS�����:");
	scanf("%d", &s);

	d[10] = s;

	for (i = 0; s != d[i]; i++);

	if (i >= 10)
	{
		printf("������Ȃ�����\n");
	}
	else
	{
		printf("�T���l%d��d[%d]�Ŕ���\n", s, i);
	}
}