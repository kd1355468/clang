
#include<stdio.h>

int gokei(int a, int b, int c);
float heikin(int a, int b, int c);

main()
{
	int a, b, c;
	int g = 0;
	float h;

	printf("������3����:");
	scanf("%d%d%d", &a, &b, &c);

	g = gokei(a, b, c);
	h = heikin(a, b, c);

	printf("���v�� %d, ���ς� %.2f\n", g, h);
}

int gokei(int a, int b, int c)
{
	int ans;
	ans = a + b + c;
	return(ans);
}

float heikin(int a, int b, int c)
{
	float ans;
	ans = (a + b + c) / 3.0;
	return(ans);
}