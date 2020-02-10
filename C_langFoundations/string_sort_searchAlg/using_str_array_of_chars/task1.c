#include <stdio.h>

int main(void) {
/*
Write a C-program that prints out a word as many times as specified. The number of repetitions and the word should be given as input to the program. You may assume that the word has no more than 100 characters (be sure to also reserve space for the null terminator, \0, though!).
*/
	
	char word[101];
	int printNum;
	
	scanf("%d", &printNum);
	scanf("%s", word);
	
	for (int i = 0; i < printNum; i++) {
		printf("%s \n", word);
	}
	return 0;
}