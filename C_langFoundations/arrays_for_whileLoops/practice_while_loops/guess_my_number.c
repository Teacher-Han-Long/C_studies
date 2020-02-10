#include <stdio.h>

int main(void) {
	// My solution BAD
	int target;
	int guess;
	int guessCount = 1;
	
	scanf("%d", &target);
	scanf("%d", &guess);
	while (guess != target) {
		if (guess < target) {
			printf("it is more \n");
		} else {
			printf("it is less \n");
		}
		guessCount++;
		scanf("%d", &guess);
	}
	printf("Number of tries needed: \n");
	printf("%d \n", guessCount);
	return 0;
	
/*
// Their solution GOOD
	int secretNumber;
    scanf("%d",&secretNumber);
    int proposal = secretNumber + 1; 
    int nbTries = 0;
    while (proposal != secretNumber)
    {
        scanf("%d",&proposal);
        if (proposal < secretNumber)
            printf("it is more\n");
        if (proposal > secretNumber)
            printf("it is less\n");
        nbTries = nbTries + 1;
    }
    printf("Number of tries needed:\n%d\n",nbTries);

*/
}