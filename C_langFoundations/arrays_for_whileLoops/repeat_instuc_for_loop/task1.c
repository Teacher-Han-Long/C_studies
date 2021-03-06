#include <stdio.h>

int main(void) {
	
/*
REFACTORED TO USE ARR[I] AS INPUT VARIABLE IN SCANF
USES LESS MEMORY(VARIABLES). 

You are responsible for a rail convoy of goods consisting of several boxcars. You start the train and after a few minutes you realize that some boxcars are overloaded and weigh too heavily on the rails while others are dangerously light. So you decide to stop the train and spread the weight more evenly so that all the boxcars have exactly the same weight (without changing the total weight). For that you write a program which helps you in the distribution of the weight.

Your program should first read the number of cars to be weighed (integer) followed by the weights of the cars (doubles). Then your program should calculate and display how much weight to add or subtract from each car such that every car has the same weight. The total weight of all of the cars should not change. These additions and subtractions of weights should be displayed with one decimal place.

You may assume that there are no more than 50 boxcars. 

Example 1
In this example, there are 5 boxcars with different weights summing to 110.0. The ouput shows that we are modifying all the boxcars so that they each carry a weight of 22.0 (which makes a total of 110.0 for the entire train). So we remove 18.0 for the first boxcar, we add 10.0 for the second, we add 2.0 for the third, etc.
input: 
5
40.0
12.0
20.0
5.0
33.0
*/	
    int numOfCars;
	int i;
	double arr[50];
	//double weightInput;
	double totalWeight = 0;
	double avgWeight = 0;
	//double newWeight = 0;
	
	printf("How many cars will be weighed? : ");
	scanf("%d", &numOfCars);
	
	for (i = 0; i < numOfCars; i++) {
		printf("enter the weight: ");
		scanf("%lf", &arr[i]); //&weightInput
		totalWeight += arr[i];
		//arr[i] = weightInput;
		//totalWeight += weightInput;
	}

	avgWeight = totalWeight / numOfCars;

	/*
	for (i = 0; i < numOfCars; i++) {
		if (avgWeight < arr[i]) {
			newWeight = arr[i] - avgWeight;
			printf("-%.1lf \n", newWeight);
		} else {
			newWeight = avgWeight - arr[i];
			printf("%.1lf \n", newWeight);
		}
	}*/
	
	for (i = 0; i < numOfCars; i++) {
		printf("%.1lf \n", avgWeight - arr[i]);
	}
	return 0;
	
	/*Their solution
	
	int nbBoxCars, carNumber;
    double weights[50];
    double totalWeight = 0.0;
    double averageWeight;
    
    scanf("%d\n",&nbBoxCars);
    for (carNumber = 0; carNumber < nbBoxCars; carNumber = carNumber + 1)
    {
        scanf("%lf",&weights[carNumber]);
        totalWeight = totalWeight + weights[carNumber];
    }

    averageWeight = totalWeight / nbBoxCars;

    for (carNumber = 0; carNumber < nbBoxCars; carNumber = carNumber + 1)
    {
        printf("%.1lf\n",averageWeight - weights[carNumber]);
    }
    return 0;
	
	*/
	
}