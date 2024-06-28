
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i, data[20], targat, work;

	//代入
	for (i = 0; i < 20; i++)
	{
		data[i] = i + 1;
	}

	//入れ替え前確認用
	printf("\n-----------------\n");
	for (i = 0; i < 20; i++)
	{
		printf("data[%2d] = %2d\n", i, data[i]);
	}

	//シャッフル1
	/*srand(time(0));

	for (i = 0; i < 20; i++)
	{
		targat = rand() % 20;

		work = data[i];
		data[i] = data[targat];
		data[targat] = work;
	}*/

	//シャッフル2
	srand(time(0));
	for (i = 19; i > 0; i--)
	{
		targat = rand() % i;

		work = data[i];
		data[i] = data[targat];
		data[targat] = work;
	}

	//入れ替え後確認
	printf("\n-----------------\n");
	for (i = 0; i < 20; i++)
	{
		printf("data[%2d] = %2d\n", i, data[i]);
	}
}