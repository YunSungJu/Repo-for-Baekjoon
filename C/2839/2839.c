#include <stdio.h>
#include <stdbool.h>


bool isMultipleOfFive(int input);
int printResult(int input, int result, int n);



bool isMultipleOfFive(int input){

	if (input%5 == 0){
		return true;
	}

}

int printResult(int input, int result, int n){

	if ( input == 0){
		return result;
	}
	else if ( input < 3 || n > 4){
		return -1;
	}
	else if (isMultipleOfFive(input)){
		result += input/5;
		return result;
	}
	else{
		input -= 3;
		result += 1;
		n += 1;
		printResult(input, result, n);
	}
}

int test (int input){
	int a;
	int result = -1;
	for ( a = 0; a * 5 <= input; a++)
		if ((input-a * 5) % 3 == 0)
			result = a + ((input-a*5)/3);

	return result;
}

int main ()
{
	int input = 0;
	int result = 0;
	int n = 0;


	for (int i = 3; i < 40 ; i++){
		if (test(i) == printResult(i, result, n)){
			printf("0\n");
		}
		else{
			printf("1\n");
		}
		result = 0;
		n = 0;
	}

	return 0;
}

