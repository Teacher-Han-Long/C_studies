#include <stdio.h>

int main(void) {
	
	// 1. replace isAdult and isSenior in canWork w/the comparison in the
	// variables = ((age >= 18) && !(age >= 65));
	// 2. replace the comparison in the if block with the above-save space
	// Both sets of parentheses are not necessary
	int age;
	printf("What is your age? :  ");
	scanf("%d", &age);
	int isAdult = age >= 18;
	int isSenior = age >= 65;
	int canWork = isAdult && !isSenior;
	if (canWork) {
		printf("You should be working. \n");
	} else {
		printf("You shouldn't be working. \n");
	}
	
	return 0;
}