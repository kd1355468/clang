
#include<stdio.h>
#include<string.h>

struct profile
{
	char name[20];
	int birth[3];
	char blood[5];
}data;

main()
{
	printf("–¼‘O‚ğ“ü—Í:");
	scanf("%s", data.name);

	printf("¶”NŒ“ú‚ğ‹ó”’‚Å‹æØ‚Á‚Ä“ü—Í:");
	scanf("%d%d%d", &data.birth[0], &data.birth[1], &data.birth[2]);

	printf("ŒŒ‰tŒ^‚ğ“ü—Í:");
	scanf("%s", data.blood);

	printf("%s--%d ”N %d Œ %d “ú¶ ŒŒ‰tŒ^[%s"
		, data.name, data.birth[0], data.birth[1], data.birth[2]
		, data.blood);
}