
#include<stdio.h>
main()
{
	int i, j, k, g;
	int ap[2][2][3] = {
		{ {3,4,5},{4,5,6} },
		{ {2,2,3},{2,5,6} }
	};
	g = 0;

	for (i = 0; i < 2 ; i++ ) 
	{
		printf("アパート%d", i + 1);
		for ( j = 0; j < 2; j++) 
		{
			printf("(%d階):", j + 1);
			for (k = 0; k < 3; k++)
			{
				printf("%d ", ap[i][j][k]);
				g += ap[i][j][k];
			}
		}
		printf("\n");
	}


	printf("全体で%d人住んでいます\n", g);
}