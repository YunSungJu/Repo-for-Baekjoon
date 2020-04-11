#include <stdio.h>
#include <stdlib.h>

int ** make_tree(int N);
void print_tree(int N, int **p);
int main(void){
	int k=0;
	scanf("%d",&k);
	print_tree(k, make_tree(k));

	return 0;
}

int ** make_tree(int N){

	int **a = NULL;
	a = (int **)malloc( sizeof(int *) * N);
	for (int i=0; i < N; i++){
		a[i] = (int *)malloc(sizeof(int)*(2*N-1));
	}

	if (N == 3){

		a[0][0] = ' ';
		a[0][1] = ' ';
		a[0][2] = '*';
		a[0][3] = ' ';
		a[0][4] = ' ';

		a[1][0] = ' ';
		a[1][1] = '*';
		a[1][2] = ' ';
		a[1][3] = '*';
		a[1][4] = ' ';
		
		a[2][0] = '*';
		a[2][1] = '*';
		a[2][2] = '*';
		a[2][3] = '*';
		a[2][4] = '*';

	}else{
		for (int i=0; i < N/2; i++){
			for (int j=0; j < N/2; j++){
				a[i][j] = ' ';
			}
		}
		for (int i=0; i<N/2; i++){
			for (int j=N*3/2-1; j<2*N-1; j++){
				a[i][j] = ' ';
			}
		}


		for (int i=N/2; i<N ;i++){
			a[i][N-1] = ' '; 
		}


		for (int i=0, k=0; i<N/2; i++,k++){
			for (int j=N/2, l=0; j<N*3/2-1; j++,l++){
			a[i][j] = make_tree(N/2)[k][l];
			}
		}
		for (int i=N/2, k=0; i<N; i++,k++){
			for (int j=0, l=0; j<N-1; j++,l++){
			a[i][j] = make_tree(N/2)[k][l];
			}
		}
		for (int i=N/2, k=0; i<N; i++,k++){
			for (int j=N, l=0; j<2*N-1; j++,l++){
			a[i][j] = make_tree(N/2)[k][l];
			}
		}
	}

	return a;
}

void print_tree(int N, int **p){
	
	for (int i=0; i<N ; i++){
		for (int j=0; j<2*N-1 ; j++){
			printf("%c",p[i][j]);
		}
		printf("\n");
	}
	free(p);
}
