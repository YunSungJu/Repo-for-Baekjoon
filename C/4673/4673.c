#include <stdio.h>

int * make_thous_arry();
void remove_dnum(int *k);
int d(int n);


int main(void){

	int *p = make_thous_arry();
	remove_dnum(p);
	
	for (int i = 0; i < 9999; i++){
		if (p[i] != 0){
			printf("%d\n", p[i]);
		}
	}
	return 0;	
}

int * make_thous_arry(){

	static int a[9999];
	for (int i = 0; i < 9999; i++ ){
		a[i] = i + 1;
	}

	return a;
}


void remove_dnum(int *k){
	int i = 0;
	int init = k[i];
	int tempt = 0;

	while (i < 9999){
		if (init != 0){
			tempt = init;
			while ( d(tempt) <= 9999 ){
				tempt = d(tempt);
				if (k[tempt-1] != 0) { k[tempt-1] = 0;}
			}
			tempt = 0;
		}
		i++;
		init = k[i];
	}
}

int d(int n){								//for integer n, d(n)=n + n'cipher
	int k[5] = {0,0,0,0,0};
	int i=0;
	int tempt = n;
	int dn = n;

	while (i < 5){
		if ( (tempt/10) >= 1){
			k[i] = tempt%10;
			tempt = tempt/10;
		}else{
			k[i] = tempt;
			break;
		}
		i++;
	}
	
	for (int i = 0; i < 5; i++){
		dn += k[i];
	}

	return dn;
}

