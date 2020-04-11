#include <stdio.h>

int find_layer(int N);
int main(void){
	int layer = 0;
	int N = 0;

	scanf("%d", &N);
	layer = find_layer(N);

	printf("%d\n", layer);

	return 0;
}

int find_layer(int N){
	int layer = 1;
	int l_end = 1;

	while (N > l_end){
		for (int n=1; n>0; n--){
			l_end += 6*layer;
		}
		layer += 1;
	}
	return layer;
}
