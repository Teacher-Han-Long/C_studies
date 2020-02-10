#include <stdio.h>

int main(void) {
	
	int numOfCities;
	//originally declared population here
	int count = 0;
	
	scanf("%d", &numOfCities);
	for (int i = 0; i < numOfCities; i++) {
		int population;
		scanf("%d", &population);
		if (population >= 10 * 10000) {
			count++;
		}
	}
	
	printf("%d \n", count);

/* Their code
	 int nbCities;
    scanf("%d", &nbCities);
    int nbBigCities = 0;
    for(int i = 0; i < nbCities ; i++)
    {
        int population;
        scanf("%d", &population);
        if(population > 10 * 1000)
        {
            nbBigCities = nbBigCities + 1;
        }
    }
    printf("%d", nbBigCities);
    return 0;
*/	
}
