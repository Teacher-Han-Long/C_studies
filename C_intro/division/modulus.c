#include <stdio.h>

int main(void) 
{
	
	// pay 166 with 20's, and the rest with singles
	int twenties = 166/20;
	int remainder = 166%20;
	printf("You need to pay $%d in twenties, \n", twenties * 20); 
	printf("and %d in singles. \n", remainder);
	
	/*
	int numOfMatches;
	int boxSize;
	printf("How many loose matches do you have altogether? : ");
	scanf("%d", &numOfMatches);
	printf("How many matches does your box hold? : ");
	scanf("%d", &boxSize);
	printf("You will have %d full boxes, \n", numOfMatches/boxSize);
	printf("and %d loose matches leftover. \n", numOfMatches%boxSize);
	*/
}
