
#include<stdio.h>
main()
{
	char moji;
	int su1,su2,su3,g;
	g = 0;

	printf("処理を入力:");
	scanf("%c", &moji);

	printf("整数を入力:");
	scanf("%d%d%d", &su1, &su2, &su3);

	switch (moji) {
	     case'd':
		 case'D':
			 if (su1 > su2)
			 {
				 if (su1 > su3)
				 {
					 printf("最大値は%dです\n", su1);
				 }
				 else 
				 {
					 printf("最大値は%dです\n", su3);
				 }
			 }
			 else 
			 {
				 if (su2 > su3)
				 {
					 printf("最大値は%dです\n", su2);
				 }
				 else
				 {
					 printf("最大値は%dです\n", su3);
				 }
			 }
			 break;

		 case's':
		 case'S':
				 if (su1 < su2)
				 {
					 if (su1 < su3)
					 {
						 printf("最小値は%dです\n", su1);
					 }
					 else
					 {
						 printf("最小値は%dです\n", su3);
					 }
				 }
				 else
				 {
					 if (su2 < su3)
					 {
						 printf("最小値は%dです\n", su2);
					 }
					 else
					 {
						 printf("最小値は%dです\n", su3);
					 }
				 }
				 break;

		 case'g':
		 case'G':
			 printf("合計は%dです\n", su1 + su2 + su3);
			 break;

		 case'h':
		 case'H':
			 g += su1 + su2 + su3;
			 printf("平均は%.2fです\n", (float)g / 3);
	}
}