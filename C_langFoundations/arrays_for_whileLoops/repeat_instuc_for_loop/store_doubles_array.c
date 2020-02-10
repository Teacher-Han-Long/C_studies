#include <stdio.h>

int main(void) {
	
	double arr[3];
	double dub;
	int cell = 0;
	for (int i =0; i < 3; i++) {
		printf("Enter a decimal value: ");
		scanf("%lf", &dub);
		arr[cell] = dub;
		printf("Cell number %d now has the value %.2lf \n", cell, dub);
		cell += 1;
	}
	
	
}