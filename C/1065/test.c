#include <stdio.h>

int fibo(int n){
	if (n==1)
	{
		return 1;
	}
	
	return n*fibo(n-1);
}

int main(int argc, char *argv[]){

	printf("Fibo = %d", fibo(50));
	return 0;
}

