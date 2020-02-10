#include <stdio.h>

int main(void) {
	
	int sunny = 0; // 0: cloudy, other value (1 for ex) : sunny
	int vacation = 0; // 0: working, other value (1 for ex) : vacation
	int NotSunnyAndVacation = !sunny && vacation;
	if (NotSunnyAndVacation) {
		printf("It's cloudy but at least I'm on vacation! \n");
	}
	return 0;
}