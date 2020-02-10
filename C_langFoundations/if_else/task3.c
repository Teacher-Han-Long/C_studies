#include <stdio.h>

int main(void) {

/*
ou arrive in front of a bridge that you must cross to reach a village before dark. Crossing the bridge is not free - the bridgekeeper asks you to roll two dice to determine the cost. You decide to write a program to verify that he is charging the right price.

Your program should read two integers, between 1 and 6, representing the values of each die. If the sum is greater than or equal to 10, then you must pay a special fee (36 coins). Otherwise, you pay twice the sum of the values of the two dice. Your program must then display the text "Special tax" or "Regular tax" followed by the amount you have to pay on the next line.e a program that calculates the cost you have to pay. The program should read the number of passengers (an integer) and the cost of gas for the trip (a decimal number). The program should then print the cost that you have to pay (a decimal number) with 2 digits after the decimal point.

 input: 5
		  6
 output: Special tax
			36
*/
	int roll1, roll2;
    
    scanf("%d", &roll1);
    scanf("%d", &roll2);
    int sum = roll1+roll2;
    int specTax = sum >= 10;
    
    if (specTax) {
        sum = 36;
        printf("Special tax \n");
        printf("%d", sum);
    } else {
        sum *= 2;
        printf("Regular tax \n");
        printf("%d", sum);
    }
	
	//their code
	int totalExceedsOrEquals10;
    int total;
    int dice1 = 0;
    int dice2 = 0;

    scanf("%d %d", &dice1, &dice2);
    total = dice1+dice2;
    totalExceedsOrEquals10 = total >= 10;

    if(totalExceedsOrEquals10){
        printf("Special tax\n");
        printf("36");
    }else{
        printf("Regular Tax\n");
        printf("%d", total*2);
    }

    return 0;
}