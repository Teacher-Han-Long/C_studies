#include <stdio.h>

int main(void) {
	
	// REFACTOR TO NOT NEED THE notSix VARIABLE
	/* Prompt user for a die value (1-6) repeadtedly until the number entered is a 6
	Keep count of the number of rolls.
		Use a while loop
	*/
	/*
	int dieValue;
	int notSix;
	int count = 0;
	
	count++
	scanf("%d", &dieValue);
	notSix = dieValue != 6;

	while (notSix) {
		count++;
		scanf("%d", &dieValue);
		notSix = dieValue != 6;
	}
	
	printf("It took %d tries to roll a %d \n", count, dieValue);
	return 0;
	*/
	
	// Their code only increments count(nbThrows) at the bottom of the loop, then
	// prints the nbThrows + 1 (also nbThrows can be declared with a value of one.
	// retrieve the value representing a throw
	
	int dieValue;
	int count = 1;
	
	scanf("%d", &dieValue);

	while (dieValue != 6) {
		count++;
		scanf("%d", &dieValue);
	}
	
	printf("It took %d tries to roll a %d \n", count, dieValue);
	return 0;
}