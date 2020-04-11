#include <stdio.h>

int main(void){
	int rabby=2;
	int bunny=1;
	int n;
	int tempt = 0;

	scanf("%d", &n);

	if (n==1){
		printf("%d\n", bunny);
	}
	else if (n==2){
		printf("%d\n", rabby);
	}
	else{
		while (n>2){
			tempt = rabby;
			rabby = rabby + bunny;
			bunny = tempt;
			n--;
			if (rabby >= 10007){
				rabby = rabby%10007;
			}
		}
		
		printf("%d\n", rabby);
	}
	return 0;
}
