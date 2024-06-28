
#include<stdio.h>
#include<string.h>
#define SIZE 5

struct day 
{
	int nen;
	int tuki;
	int hi;
};

struct profile
{
	char name[20];
	struct day date;
	char blood[5];
};

main()
{
	struct profile data[SIZE] = { {"aaaaa", 2000,4, 8, "A"},
								  {"bbbbb", 1998,2,19,"AB"},
								  {"ccccc", 2013,5,27, "O"},
								  {"ddddd", 1987,2,29, "B"},
								  {"eeeee", 2009,3,15,"AB"} };

	struct profile* p;
	int i;
	
	for (p = data, i = 0; i < SIZE; i++, p++)
	{
		if (p->date.tuki == 2)
		{
			printf("%s--%d ”N %d ŒŽ %d “ú¶ ŒŒ‰tŒ^[%s\n",
				p->name,
				p->date.nen, p->date.tuki, p->date.hi,
				p->blood);
		}
	}


}