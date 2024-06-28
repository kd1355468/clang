
#include<stdio.h>

main()
{
	double su1, su2;

	printf("2‚Â‚ÌÀ”‚ÍH");
	scanf("%lf%lf", &su1, &su2);

	printf("***%.1lf‚Æ%.1lf‚Ìl‘¥‰‰Z\n", su1, su2);
	printf("˜a=%lf ·=%lf Ï=%lf ¤=%lf\n",
		su1 + su2, su1 - su2, su1 * su2, su1 / su2);
}