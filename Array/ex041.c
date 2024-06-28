
#include<stdio.h>
main()
{
	int  i;
	float box[3], su;

	for (su = 0, i = 0; i <3; i++) {
		printf("ŽÀ”‚ð“ü—Í:");
		scanf("%f", &box[i]);
		su += box[i];
	}

	printf("‡Œv‚Í%.2f‚Å‚·\n•½‹Ï‚Í%.2f‚Å‚·\n", su, su / 3);
}