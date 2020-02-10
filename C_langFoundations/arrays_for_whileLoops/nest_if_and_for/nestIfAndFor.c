#include <stdio.h>

int main(void) {
	
	// prints odd or even.
	int target;
	int i;
	
	printf("Enter a target number: ");
	scanf("%d", &target);
	
	if (target >= 0) {
		
		for (i = 0; i < target; i++) {
			if (i % 2) {
				printf("%d \n", i);
			}	
		}
		
	} else {
		printf("Nothing to doooooooo. \n");
	}
	
	return 0;
}