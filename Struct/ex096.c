
#include<stdio.h>

struct syohin_data
{
	char name[20];
	int  tanka;
};

void display3(struct syohin_data* syohin1);

main()
{
	struct syohin_data syohin = { "�����S��",50 };

	display3(&syohin);
}

void display3(struct syohin_data* syohin)
{
	printf("%s %d", syohin->name, syohin->tanka);
}