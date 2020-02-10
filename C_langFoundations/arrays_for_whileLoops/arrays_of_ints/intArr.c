#include <stdio.h>

int main(void) {
	/*
	int arr[3]; //creates the space to hold 3 integers
	arr[0] = 3;
	arr[1] = 6;
	arr[2] = 4;
	arr[3] = 4;
	printf("First number is: %d", arr[0]);
	printf("Second number is: %d", arr[1]);
	*/

	int arSiz = 0;
	int cellNum = 0;
	char play; 
	int i, readVal;
	
	printf("Would you like to build an array? (y/n) :  ");
	scanf("%c", &play);
	if (play == 'y') {
		printf("\n");
		// initialize array and collect array data
		printf("Enter the number of elements you'd like to have in your array: ");
		scanf("%d", &arSiz);
		int arr[arSiz];
		for (i = 0; i < arSiz; i++) {
			printf("Value number %d : ", i+1);
			scanf("%d", &readVal);
			arr[cellNum] = readVal;
			printf("%d has been added at cell %d \n", readVal, cellNum);
			cellNum++;
		}
		// print the array
		printf("You made an integer array that kind of looks like this.\n"); 
		printf("arr = { ");
		for (i = 0; i < arSiz; i++) {
			printf("[%d]", arr[i]);
		}
		printf(" } \n");
		printf("\n");
		// Be nice
		printf("Dennis Ritchie says you're cool. \n");
		printf("Thanks for playing!");
		printf("\n");
		
	} else {
		printf("Well, piss-off then.\n");
	}
	
	return 0;
}

