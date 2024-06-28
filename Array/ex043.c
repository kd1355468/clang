
#include<stdio.h>
main()
{

	int i;
	char data[] = "orange";

	printf("•¶š—ñ:%s\n", &data[0]);

	for (i = 0; data[i] != '\0'; i++);

	printf("•¶š”‚Í%d‚Å‚·\n", i);

}