#include <stdio.h>

int main(void) {
	
	char str[30];
	int len = 0;
	
	printf("Enter a string 30 characters or less: ");
	scanf("%s", str);
	while (str[len] != '\0') {
		len++;
	}
	printf("The length of %s is %d \n", str, len);
	
}