#include <stdio.h>

int main(void) {
	
	char str[51];
	int len = 0;
	int lineNum = 1;
	
	scanf("%s", str);
	while (str[len] != '\0') {
		len++;
	}
	
	if (len % 2) {      // if (len%2 != 0) 
		lineNum += 1;
	}
	
	printf("%s, you may proceed to line %d \n\n", str, lineNum);
	
	/*
	if (len%2 == 0) {   // better syntax?
		printf("1");
	} else {
		printf("2");
	}
	
	*/
}