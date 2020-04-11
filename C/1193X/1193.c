#include <stdio.h>

int* find_lvl(int N);

int main (void){
	int N = 0;
	int* lvl_;

	scanf("%d", &N);
	lvl_ = find_lvl(N);
	
	printf("%d/%d\n", lvl_[0], lvl_[1]);
	return 0;
}

int* find_lvl(int N){
	extern int lvl[2];
	lvl[0]=1;
	lvl[1]=2;

	while (N > lvl[1]){
		lvl[0] ++;
		lvl[1] += lvl[0];
	}
	return lvl;
}
