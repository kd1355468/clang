
#include <stdio.h>
main()
{
	int su;
	char moji;
	moji = '*';

	printf("��������:");
	scanf("%d", &su);
	while (su>0) {
		printf("%c", moji);
		su -= 1;
	}
}