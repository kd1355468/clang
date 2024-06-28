
#include<stdio.h>
main()
{

	int i;
	char data[6] = "Apple";

	printf("1•¶Žš‚¸‚Â•\Ž¦\n");

	for (i = 0; i <= 6; i++) 
	{
		printf("%c", data[i]);
	}

	printf("\n");
	printf("•¶Žš—ñ‚ð•\Ž¦\n%s", &data[0]);

}