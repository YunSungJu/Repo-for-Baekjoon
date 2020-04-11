#include <stdio.h>

int main(){
	int num=0;
	int c;

	while ((c=getchar()) != EOF){
		num += 1;
		if (num==10){
			num = 0;
			putchar(c);
			putchar('\n');
		}else{
			putchar(c);
		}
	}
	return 0;
}
