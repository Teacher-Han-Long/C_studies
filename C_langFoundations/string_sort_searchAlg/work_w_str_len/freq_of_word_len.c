#include <stdio.h>

int main(void) {
	
	int i, j = 0;
    int nbWords = 0;
	int length[10]; // ex. length[5] contains number of 5-letter-long words
	char word[11];
	int l = 0;
	
	
	for (i = 0; i < 10; i++) {
		length[i] = 0;
	}
	
	scanf("%d", &nbWords);
	for (i = 0; i < nbWords; i++) {
		scanf("%s", word);
		l = 0;                              //??????????
		while (word[l] != '\0') {
			l++;
		}
		length[l] = length[l] + 1;
		printf("%s %d \n", word, l);
	}
	
	for (j = 0; j < 10; j++) {
		printf("There is/are %d word(s) with %d letters. \n", length[j], j);
	}
	return 0;
}