#include <stdio.h>

int main(void) {
	int i;
	int numWords = 0;
	char word[101];
	int len = 0;
	int longest = 0;
	
	printf("Enter the number of words: ");
	scanf("%d", &numWords);
	for (i = 0; i < numWords; i++) {
		
		scanf("%s", word);
		len = 0;
		while (word[len] != '\0') {
			len++;
		}
		
		if (len > longest) {
			longest = len;
		}
	}
	printf("The longerst word is %d letters long. \n", longest);
	return 0;
	
	/*Their code: 
	
	int i, length;
    int max = 0;
    int num = 0;
    char word[101];

    scanf("%d", &num);
    for(i = 0 ; i < num ; i++){
        scanf("%s", word);
        length = 0;
        while(word[length]!='\0'){
            length++;
        }
        if (length > max)
        	max = length;
    }

    printf("%d\n", max);
    return 0;
	*/
}