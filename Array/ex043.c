
#include<stdio.h>
main()
{

	int i;
	char data[] = "orange";

	printf("������:%s\n", &data[0]);

	for (i = 0; data[i] != '\0'; i++);

	printf("��������%d�ł�\n", i);

}