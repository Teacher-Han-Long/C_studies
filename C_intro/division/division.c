#include <stdio.h>

int main(void) 
{
	/*
	// returns an int - 2
	printf("5/2 equals %d. \n", 5/2);
	// floating point division
	printf("5/2 equals %lf. \n", 5.0/2.0);
	// as long as one is a floating point
	printf("5/2.0 equals %lf. \n", 5/2.0);
	printf("5.0/2 equals %lf. \n", 5.0/2);
	// format a double, enter an int and vice-versa - won't compile
	printf("5/2 equals %lf. \n", 5/2);
	printf("5.0/2 equals %d. \n", 5.0/2);
	return 0;
	*/
	/*
	// play with errors
	int iFive = 5;
	int iTwo = 2;
	double dFive = 5.0;
	double dTwo = 2.0;
	printf("iFive / iTwo = %d \n", iFive / iTwo);
	printf("dFive / dTwo = %lf \n", dFive / dTwo);
	printf("dFive / iTwo = %lf \n", dFive / iTwo);
	printf("iFive / dTwo = %lf \n", iFive / dTwo);
	return 0;
	*/
	
	// Celsius to Fahrenheit
	// read a decimal number representing a temperature in degrees Celsius
	// print out corresponding temp in Fahrenheit with 1 decimal place
	
	/*double celsius;
	printf("Enter the degrees celsius : ");
	scanf("%lf", &celsius);
	printf("%.1lf \n", celsius * (9.0/5.0) + 32.0);
	//------------------------------------------------------
	*/
	double celsius;
	double fahr;
	printf("Enter the degrees celsius : ");
	scanf("%lf", &celsius);
	fahr = celsius * (9.0/5.0) + 32.0;
	printf("%.1lf \n", fahr);
	
}