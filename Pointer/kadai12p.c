
#include<stdio.h>
main()
{
	char* day[] = { "Sunday","Monday","Tuesday","Wednesday"
				 ,"Thursday","Friday","Saturday","NULL"};
	int i;
	char** p=day;

	//�p�^�[��1�@day[i]�̌`���ŕ������\��
	for (i = 0; i < 7; i++)
	{
		printf("%s\n", day[i]);
	}

	printf("\n");

	//�p�^�[��2-1 *p��p���ĕ�����\��
	for (i = 0; i < 7; i++)
	{
		printf("%s\n", *(p + i));
	}

	printf("\n");

	//�p�^�[��2-2
	while (*p)
	{
		printf("%s\n", *p++);
	}

}