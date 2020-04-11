#include <stdio.h>

int cycle(int num){
	int d1,d2;
	int n1,n2;
	int n_num;

	d1 = num/10; n1 = num%10;
	n_num = d1+n1;
	d2 = n_num/10; n2 = n_num%10;

	return 10*n1 + n2;
}

int main(){
	int num = 26;
	int i=3;
	while (i != 0){
		printf("%d\n",cycle(num));
		num = cycle(num);
		i--;
	}

	return 0;
}
