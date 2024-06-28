
#include <stdio.h>
main()
{
	int su;
	char moji;
	moji = '*';

	printf("”‚ð“ü‚ê‚Ä:");
	scanf("%d", &su);
	while (su>0) {
		printf("%c", moji);
		su -= 1;
	}
}