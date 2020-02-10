#include <stdio.h>

int main(void) {
	/*
	//finds largest element in an array
	int nums[5];
	int i, maxVal = 0;
	printf("Enter 5 values below \n");
	for (i = 0; i < 5; i++) {
		scanf("%d", &nums[i]);
		if ( nums[i] > maxVal) {
			maxVal = nums[i];
		}
	}
	printf("The maximum value in your array is %d. \n\n", maxVal);
	return 0;
	*/
	/*finds largest element and the difference between max and the rest
	int nums[5];
	int i, maxVal = 0;
	int diff = 0;
	
	printf("Enter 5 ages below \n");
	for (i = 0; i < 5; i++) {
		scanf("%d", &nums[i]);
		if ( nums[i] > maxVal) {
			maxVal = nums[i];
		}
	}
	printf("The maximum value in your array is \n");
	printf("------------------------------------\n");
	printf("%d. \n\n", maxVal);
	printf("Age differences with eldest person: \n");
	printf("------------------------------------\n");
	for (i = 0; i < 5; i++) {
		diff = maxVal - nums[i];  // doesn't necessarily need var diff
		printf("%d : %d \n", nums[i], diff);
	}
	return 0;
	*/
	
	//finds smalles element and the difference between min and the rest
	int nums[5];
	int i, minVal = 0;
	int diff = 0;
	
	printf("Enter 5 ages below \n");
	for (i = 0; i < 5; i++) {
		scanf("%d", &nums[i]);
		if ( nums[i] < minVal) {
			minVal = nums[i];
		}
	}
	printf("The minimum value in your array is \n");
	printf("------------------------------------\n");
	printf("%d. \n\n", minVal);
	printf("Age differences with eldest person: \n");
	printf("------------------------------------\n");
	for (i = 0; i < 5; i++) {
		diff = nums[i] - minVal;  // doesn't necessarily need var diff
		printf("%d : %d \n", nums[i], diff);
	}
	return 0;
	


}