
#include <stdio.h>
main()
{
	int e,su1,su2 ;
	printf("���Z�q�����");
	scanf("%d", &e);
	printf("�Q�̐��������");
	scanf("%d%d", &su1, &su2);
	if (e = 1) {
		printf("%d", su1 + su2);
	}
	else{
		if (e = 2) {
			printf("%d", su1 - su2);
		}
		else{
			if (e = 3) {
				printf("%d", su1 * su2);
			}
			else{
				if (e = 4) {
					printf("%d", su1 / su2);

				}
			}
		}
	}
}