
#include <stdio.h>
main()
{
	int k;
	printf("Œ‚ğ“ü—Í:");
	scanf("%d", &k);
	if (k == 1 || k == 3 || k == 5 || k == 7 || k == 8 || k == 10 || k == 12) {
		printf("ÅI“ú‚Í31“ú‚Å‚·");
	}
	else {
		if (k == 4 || k == 6 || k == 9 || k == 11) {
			printf("ÅI“ú‚Í30“ú‚Å‚·");
		}
		else {
			printf("ÅI“ú‚Í28“ú‚Å‚·");
		}
	}
}