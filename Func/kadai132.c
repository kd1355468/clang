
#include<stdio.h>

main()
{
	int ret, cnt, su, g=0;

	printf("����(~z�ŏI��)?");
	ret = scanf("%d", &su);

	for (cnt = 0; su != EOF; cnt++)
	{
		g += su;
		printf("����(~z�ŏI��)?");
		ret = scanf("%d", &su);
	}

	printf("���v��%d\n���ρ�%f", su, (float)su / cnt);
}