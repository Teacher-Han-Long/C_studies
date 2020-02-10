#include <stdio.h>

int main(void) {
	
	int list[] = {-10,-5,1,5,8,17,77,106,759,900};
	int n = 10; // TODO: getLength function
	int item;
	int indA, indB, mid;
	int found;
	
	printf("Enter the number you search for: ");
	scanf("%d", &item);
	indA = 0;
	indB = n - 1;
	found = 0;
	
	while (!found && indA<=indB) {
		mid = (indA + indB) /2;
		if (item == list[mid]) {
			found = 1;
		} else if (item < list[mid]) {
			indB = mid - 1;
		} else {
			indA = mid + 1;
		}
	}
	
	if (!found) {
		printf("Your item %d is not in this list \n", item);
	} else {
		printf("Item number %d has been found at index %d. \n", item, mid);
	}
	
	return 0;
}