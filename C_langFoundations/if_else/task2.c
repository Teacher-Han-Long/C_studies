#include <stdio.h>

int main(void) {
	
	int arrivTime;
	int base = 10;
	int charge = 5;
	int totalCharge = 0;
	
	printf("What time are you arriving? (0-12) :");
	scanf("%d", &arrivTime);
	
	int noCharge = (arrivTime == 0);
	if (noCharge) {
		totalCharge = base;
	}
	if (arrivTime >= 9) {
		totalCharge = 53;
	} else {
		totalCharge =  base + (arrivTime * charge);
	}
	
	printf("Your charge is $%d \n", totalCharge);
}