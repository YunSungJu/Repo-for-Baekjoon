#include <stdio.h>

int cycle(int num);
int main(){
	int i=1;
	int num;
	int c_num;
	scanf("%d",&num);
	c_num = num;

	while (cycle(c_num) != num){
		c_num = cycle(c_num);
		i++;
	}
	printf("%d", i);

	return 0;
}

int cycle(int num){
	int d1,d2;
	int n1,n2;
	int n_num;

	d1 = num/10; n1 = num%10;
	n_num = d1+n1;
	d2 = n_num/10; n2 = n_num%10;

	return 10*n1 + n2;
}
