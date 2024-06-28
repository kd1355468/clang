
#include<stdio.h>

main()
{
	char c = 'A';
	int i;

	for (i = 0; (c + i) <= 'Z'; i++)
	{
		printf("%c ", c + i);
	}
}