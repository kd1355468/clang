
#include<stdio.h>
main()
{
	int i, no;
	char s[21];

	printf("���������͂��Ă�������>");
	scanf("%s", &s[0]);

	for (i = 0; s[i] != '\0'; i++)
	{
		printf("s[%d]�̕������L�[>", i);
		scanf("%d", &no);

		s[i] = s[i] - no;
	}

	printf("�������ςݕ�����́A%s\n", &s[0]);
}