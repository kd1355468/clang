
#include<stdio.h>

struct syohin_data
{
	char name[20];
	int  tanka;
	int  kosuu;
}syohin[3], * p = syohin;

main()
{
	syohin[3] = { {"エンピツ",30,5},{"消しゴム",50,2 }, { "フデバコ",500,3 } };

	int i;

	for (i = 0; i < 3; i++,p++)
	{
		printf("商品名:%s\t", p->name);
		printf("単価:%4d\t",  p->tanka);
		printf("個 数:%4d\t", p->kosuu);
		printf("金額:? %4d\n", p->tanka * p->kosuu);
	}
}}