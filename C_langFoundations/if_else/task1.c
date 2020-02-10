#include <stdio.h>

int main(void) {
/*	You are planning a car trip so you post on a carpooling website in order to share the cost of the trip.

If you have 0 passengers the carpool site does not charge anything and you alone pay the full cost of the trip. If you have 1 or more passengers the carpool site adds a $1 fee to the cost of the trip and evenly divides the total cost ($1 fee + gas) among the passengers and you. You want to write a program that calculates the cost you have to pay. The program should read the number of passengers (an integer) and the cost of gas for the trip (a decimal number). The program should then print the cost that you have to pay (a decimal number) with 2 digits after the decimal point.
	Input: 0,  23.9
	Output 23.90
	2, 45.5
	15.50
	3,  3.48
	8.95
*/
	int passengers;
	double gas;
	double costOfTrip = 0;
	
	printf("Enter number of passengers:  ");
	scanf("%d", &passengers);
	printf("Enter price of gas:  ");
	scanf("%lf", &gas);
	
	if (passengers == 0) {
		costOfTrip = gas;
	} else {
		costOfTrip = (gas + 1) / (passengers + 1);
	}
	
	printf("The cost of your trip is : $%.2lf \n", costOfTrip);
	
	/*
	//Their code
	
	int nbPassengers = 0;
    double totalCost = 0.0;
    scanf("%d %lf", &nbPassengers, &totalCost);
    int alone = nbPassengers == 0;
    if(alone){
        printf("%.2lf", totalCost);
    }else{
        totalCost = totalCost + 1; //car pooling site fees
        printf("%.2lf", totalCost/(nbPassengers+1));
    }
    return 0;
	*/
}
