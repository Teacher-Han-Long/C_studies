#include <stdio.h>

int main(void) {
	// refactor with a do \while loop to prompt until !badRoll
	int i, j;
	int numPlay;
	int numDice;
	int roll;
	int badRoll;
	int total;
	
	printf("Enter the number of player: ");
	scanf("%d", &numPlay);
	printf("Enter the number of dice: ");
	scanf("%d", &numDice);
	printf("\n");
	
	
	printf("ONLY ENTER NUMBERS FROM 1 - 6 \n We mean it \n");
	for (i = 0; i < numPlay; i++) {
		
		total = 0;
		for (j = 0; j < numDice; j++) {
			printf("player %d, roll %d: ", i+1, j+1);
			scanf("%d", &roll);
			
			if (roll < 1 || roll > 6) {
				printf("Illegal roll. Player %d cheated! \n", j+1); 
				printf("SESSION TERMINATED \n\n");
				return 0;
			} else {
				total += roll;
			}
		}
		printf("Player %d rolled: %d\n", i+1, total);
	}
	return 0;
}