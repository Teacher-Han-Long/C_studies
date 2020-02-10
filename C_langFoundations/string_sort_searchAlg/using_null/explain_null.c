#include <stdio.h>

int main(void) {
	char word1[5];
	char word2[8];
	printf("enter 2 words: ");
	scanf("%s %s", word1, word2);
	printf("%s %s \n", word1, word2);
	
	word1[2] = '\0';
	word2[5] = '\0';
	
	// printf stops when it encounters the null character
	
	printf("%s %s \n", word1, word2);
	return 0;
}