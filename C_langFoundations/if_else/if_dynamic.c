#include <stdio.h>

int main(void) {
	
	int a = 5;
	int b = 2;
	//Is a equal to b
	int result;
	result  =  (a == b);   //right side is evaluated first
	printf("Result : %d \n", result);
	
	// change program to check if a < b
	result = (a > b);
	if (result) {
		printf("It's true. \n");
	} else {
		printf("It's false. \n");
	}
	
	
}