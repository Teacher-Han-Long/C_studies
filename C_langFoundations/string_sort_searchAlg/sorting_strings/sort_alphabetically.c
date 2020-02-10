#include <stdio.h>

int main(void) {
	
	int i = 0;
	char word1[20];
	char word2[20];
	
	printf("Enter a word: ");
	scanf("%s", word1);
	printf("Enter another word: ");
	scanf("%s", word2);
	
	while (word1[i] != '\0' && word2[i] != '\0' && word1[i] == word2[i]) {
		i++;
	}
	
	if (word1[i] < word2[i]) {
		printf("%s comes before %s \n", word1, word2);
	} else if (word1[i] > word2[i]) {
	    printf("%s comes before %s \n", word2, word1);
	} else {
		printf("You've entered the same word twice.\n");
	}
	
	
}