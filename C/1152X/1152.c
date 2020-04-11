#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	unsigned int counter = 0;
	char str[1000000];
	char* ptr;
	
	while (scanf("%s", str) != EOF)
	{
		counter++;
	}
	printf("%d\n", counter);
	return 0;
}
