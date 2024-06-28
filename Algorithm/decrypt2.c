
#include<stdio.h>
main()
{
	int i, no;
	char s[21];

	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢>");
	scanf("%s", &s[0]);

	for (i = 0; s[i] != '\0'; i++)
	{
		printf("s[%d]‚Ì•œ†‰»ƒL[>", i);
		scanf("%d", &no);

		s[i] = s[i] - no;
	}

	printf("•œ†‰»Ï‚İ•¶š—ñ‚ÍA%s\n", &s[0]);
}