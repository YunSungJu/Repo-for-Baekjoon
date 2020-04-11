#include <stdio.h>

int main(){
	char c[1000000];
	int count=0;
	int num=0;
	int k=0;

	scanf("%s",c);

	if ((k=c[num])==32){
		while ((k=c[num])!=32){
			num++;
		}
	}else{
		while ((k=c[num])!=-1){
			if ((k=c[num])==32){
				if ((k=c[num])==32 || (k=c[num])==-1){
					break;
				}
			}

		}
	}
	printf("%d",count);
	return 0;
}
