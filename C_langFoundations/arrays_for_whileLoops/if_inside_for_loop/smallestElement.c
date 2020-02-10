#include <stdio.h>

int main(void) {
	
	//finds smalles element and the difference between min and the rest
	int nums[5];
	int i, minVal = 0;
	int diff = 0;
	
	printf("Enter 5 ages below \n");
	for (i = 0; i < 5; i++) {
		scanf("%d", &nums[i]);
	}
	for (i = 1; i < 5; i++) {
		if ( nums[i] < nums[i-1]) {
			minVal = nums[i];
		}
	}
	
	printf("The minimum value in your array is \n");
	printf("------------------------------------\n");
	printf("%d \n\n", minVal);
	printf("Age differences with eldest person: \n");
	printf("------------------------------------\n");
	for (i = 0; i < 5; i++) {
		diff = nums[i] - minVal;  // doesn't necessarily need var diff
		printf("%d : %d \n", nums[i], diff);
	}
	return 0;
	

	
}