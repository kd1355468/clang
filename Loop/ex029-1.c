
#include <stdio.h>
main()
{
	int su;
	char moji;
	moji = '*';

	printf("数を入れて:");
	scanf("%d", &su);
	while (su>0) {
		printf("%c", moji);
		su -= 1;
	}
}