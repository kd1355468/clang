
#include<stdio.h>
main()
{
	char moji;
	int su1,su2,su3,g;
	g = 0;

	printf("���������:");
	scanf("%c", &moji);

	printf("���������:");
	scanf("%d%d%d", &su1, &su2, &su3);

	switch (moji) {
	     case'd':
		 case'D':
			 if (su1 > su2)
			 {
				 if (su1 > su3)
				 {
					 printf("�ő�l��%d�ł�\n", su1);
				 }
				 else 
				 {
					 printf("�ő�l��%d�ł�\n", su3);
				 }
			 }
			 else 
			 {
				 if (su2 > su3)
				 {
					 printf("�ő�l��%d�ł�\n", su2);
				 }
				 else
				 {
					 printf("�ő�l��%d�ł�\n", su3);
				 }
			 }
			 break;

		 case's':
		 case'S':
				 if (su1 < su2)
				 {
					 if (su1 < su3)
					 {
						 printf("�ŏ��l��%d�ł�\n", su1);
					 }
					 else
					 {
						 printf("�ŏ��l��%d�ł�\n", su3);
					 }
				 }
				 else
				 {
					 if (su2 < su3)
					 {
						 printf("�ŏ��l��%d�ł�\n", su2);
					 }
					 else
					 {
						 printf("�ŏ��l��%d�ł�\n", su3);
					 }
				 }
				 break;

		 case'g':
		 case'G':
			 printf("���v��%d�ł�\n", su1 + su2 + su3);
			 break;

		 case'h':
		 case'H':
			 g += su1 + su2 + su3;
			 printf("���ς�%.2f�ł�\n", (float)g / 3);
	}
}