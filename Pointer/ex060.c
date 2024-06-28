
#include<stdio.h>
main()
{
	char data[15] = "Language",ch,*p_data;
	int i;
	p_data = data;

	printf("data[]=%s\n", data);
	printf("ŒŸõ•¶š‚ÍH");
	scanf("%c", &ch);
	printf("ŒŸõŒ‹‰Ê‚ÍA");

	for (i = 0; *(p_data + i) != '\0'; i++) 
	{
		if (ch == *(p_data + i))
		{
			printf("%d ", i + 1);
		}
	}

	printf("•¶š–Ú‚Å‚·B\n");
}