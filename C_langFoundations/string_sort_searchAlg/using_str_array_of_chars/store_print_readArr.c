#include <stdio.h>

int main(void) {
	  //! showArray(word, cursors=[i])
	
	char word[4];
	printf("enter a word with 3 characters: ");
	scanf("%s", word);               // No need for & when scanning %s
	printf("The word is :  %s \n", word);
	printf("The chars are %c %c %c %c \n", word[0], word[1], word[2], word[3]);
	word[1] = 'a';
	printf("The chars are %c %c %c %c \n", word[0], word[1], word[2], word[3]);
	for (int i = 0; i < 5; i++) {
		printf("%c ", word[i]);
	}
	printf("\n");
}