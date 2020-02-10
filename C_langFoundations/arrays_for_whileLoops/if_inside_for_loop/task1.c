#include <stdio.h>

int main(void) {
	
	//STUDY THEIR SOLUTION MUCHO,  AMIGO!
	int i;
	int numIngreds;
	double weight[10];
	double pPrice[10];
	double total = 0;
	
	printf("Number of ingrediants: ");
	scanf("%d", &numIngreds);
	
	for (i = 0; i < numIngreds; i++) {
		scanf("%lf", &weight[i]);
	}
	printf("Enter the amount needed: ");
	for (i = 0; i < numIngreds; i++) {  //DIDN'T NEED AN ARRAY!
		scanf("%lf", &pPrice[i]);          
		total += weight[i] * pPrice[i];
	}
	
	printf("%lf \n", total);
	return 0;
	
	/* Their solution
	int nbIngredients=0;
    int i, idIngredient;
    double price[10];
    double totalPrice = 0.0;
    double readPrice=0.0;

    scanf("%d", &nbIngredients);

    for(i = 0; i < nbIngredients; i++){
        scanf("%lf",&readPrice);
        price[i] = readPrice;
    }

    for (idIngredient = 0; idIngredient < nbIngredients; idIngredient++)
    {
        double quantity;
        scanf("%lf\n",&quantity);
        totalPrice = totalPrice + price[idIngredient] * quantity;
    }
    printf("%lf\n",totalPrice);

    return 0;
	*/
	
}