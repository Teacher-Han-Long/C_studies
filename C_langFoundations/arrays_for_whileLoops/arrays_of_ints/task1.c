#include <stdio.h>

int main(void) {
	/*
	Your grandparents gave you a fantastic cooking recipe but you can never remember how much of each ingredient you have to use! There are 10 ingredients in the recipe and the quantities needed for each of them are given as input (in grams). Your program must read 10 integers (the quantities needed for each of the ingredients, in order) and store them in an array. It should then read an integer which represents an ingredient's ID number (between 0 and 9), and output the corresponding quantity.
	500 168 15 45 666 2 65 154 34 25
	3
	O/P-25
	*/
	int a[10];
	int grams;
	int scanID;

	for (int i = 0; i < 10; i++) {
		printf("Enter amounts in grams : "); 
		scanf("%d", &grams);
		a[i] = grams;
	}
	printf("Please enter the ID (index) number :  ");
	scanf("%d", &scanID);
	printf("%d \n", a[scanID]);
	return 0;
	
	
	// Their code
	 int array[10];
    int readValue = 0;
    int index = 0; //indice 

    for(int i = 0 ; i < 10 ; i++){
        scanf("%d", &readValue);
        array[index] = readValue;
        index = index + 1;
    }

    scanf("%d", &readValue);
    printf("%d", array[readValue]);
    return 0;
}