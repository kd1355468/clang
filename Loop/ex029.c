
#include <stdio.h>
main()
{
	int cnt,su;
	char moji;

	cnt = 0;
	moji='*';

	printf("数を入れて:");
	scanf("%d",&su);
	while (cnt < su) {
		printf("%c", moji);
		cnt += 1;
	}
}