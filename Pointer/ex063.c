
#include<stdio.h>
main()
{
	char* p_ride[3] = { "car","bus","shinkansen" };
	char* ride[3] = { "car","bus","shinkansen" };
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("%s\n\n", p_ride[i]);
		printf("%c\n", ride[i]);
	}

	printf("ride‚ÌÁ”ïƒƒ‚ƒŠ:%d\n", sizeof ride);
}