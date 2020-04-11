#include <stdio.h>

int test()
{

	for (int n = 3; n < 40; n++){
		int a;
		int ans = -1;
		for ( a = 0; a * 5 <= n; a++)
			if ((n-a * 5) % 3 == 0)
				ans = a + ((n-a*5)/3);

		printf("%d\n", ans);
	}
	
	
}