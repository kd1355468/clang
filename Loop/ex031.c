
#include <stdio.h>
main()
{
	int su1,su2 ;
	
	su1 = 0;
	for (su2 = 1; su2 <= 10; su2++) {
		su1 += su2;
		printf("1 ‚©‚ç %d ‚Ü‚Å‚Ì˜a = %d\n", su2, su1);
	}
}