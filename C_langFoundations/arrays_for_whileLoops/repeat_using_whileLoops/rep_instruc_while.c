#include <stdio.h>

int main(void) {
	
	/* Prompt user for a die value (1-6) repeadtedly until the number entered is a 6
		Use a while loop
	*/
	int dieValue;
	int notSix;
	
	scanf("%d", &dieValue);
	notSix = dieValue != 6;
	
	while (notSix) {
		scanf("%d", &dieValue);
		notSix = dieValue != 6;
	}
	return 0;
	
}