#include <stdio.h>

int main(void){

	int q[9999];
	for(int i=0; i<9999; i++){
		q[i] = i+1;
	}

	printf("%s",typeof(q));
	
	return 0;
}
