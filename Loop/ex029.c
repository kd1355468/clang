
#include <stdio.h>
main()
{
	int cnt,su;
	char moji;

	cnt = 0;
	moji='*';

	printf("��������:");
	scanf("%d",&su);
	while (cnt < su) {
		printf("%c", moji);
		cnt += 1;
	}
}