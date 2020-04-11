#include <stdio.h>
#include <stdbool.h>

bool han(int n);

int main(void) {
	
	int num;
	int han_num = 0;
	
	printf("Input N <= 1000 : ");
	scanf("%d", &num);

	for (int i = 1; i <= num; i++){
		if (han(i)){
			han_num += 1;	
		}
	}
	printf("%d\n", han_num);

	return 0;
}

bool han(int n){

	int a[4] = {10,10,10,10};
	int i = 0;
	int tempt = 0;

	while (1){
		if (n/10 >= 1){
			tempt = n;
			n = n/10;
			a[i] = tempt%10 - n%10;
		}else{
			break;
		}
		i++;
	}
	if (a[1]==10) {return true;}
	else if (a[2]==10 && a[0]==a[1]) {return true;}
	else if (a[3]==10 && a[0]==a[1] && a[1]==a[2]) {return true;}
	else if (a[0]==a[1] && a[1]==a[2] && a[2]==a[3]) {return true;}
	else {return false;}
}
