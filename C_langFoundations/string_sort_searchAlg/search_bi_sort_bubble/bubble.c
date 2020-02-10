#include <stdio.h>

int main(void) {
	
	int list[] = { 106, -5, 1, -10, 5, 759, 900, 8, 17, 77 };
	int n = 10;
	int i, j;
	int temp;
	
	printf("\n Original array:  \n");
	for (i = 0; i < n; i++) {
		printf("%d ", list[i]);
	}
	printf("\n");
	// sorting from smallest to largest
	for (j = 0; j < n-1; j++) {
		for (i = 0; i < n-1; i++) {
			if (list[i] > list[i+1]) {
				temp = list[i];
				list[i] = list[i+1];
				list[i+1] = temp;
			}
		}
	}	
	// print sorted array
	printf("\n Sorted array: \n");
	i = 0;
	for (i = 0; i < n; i++) {
		printf("%d ", list[i]);
	}
	printf("\n\n");
	return 0;
	
}