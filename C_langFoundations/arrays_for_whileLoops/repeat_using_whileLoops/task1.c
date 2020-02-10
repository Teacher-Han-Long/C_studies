#include <stdio.h>

int main(void) {
/*
All expenses for the year have been recorded and classified in a multitude of files and the sum of all these expenses must now be calculated. But no one knows exactly how many different expenses have been made in the past year!

Your program will have to read a sequence of positive integers and display their sum. We do not know how many integers there will be, but the sequence always ends with the value -1 (which is not an expense, just an end marker).
input: -1  output: 0
*/
	int input;
	int sum = 0;
	
	scanf("%d", &input);
	while (input != -1) {
		sum += input;
		scanf("%d", &input);
	}
	printf("%d \n", sum);
	return 0;
	
	
/*
	int expense;
    scanf("%d",&expense);
    int sumOfExpenses = 0;
    while (expense != -1)
    {
        sumOfExpenses = sumOfExpenses + expense;
        scanf("%d",&expense);
    }
    printf("%d\n",sumOfExpenses);

    return 0;
*/
}