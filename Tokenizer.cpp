#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>


char* token(char *copy){
	char* res = (char *) malloc(sizeof(char) * 3);
	char* word = strtok(copy, " \n\t");
	while (word != NULL) {
	for (int i = 0; i < strlen(word); i++) {
		if (!isdigit(word[i])) {
			strcat(res,"STR ");
                        break;
                } else if (isdigit(word[i]) && isalpha(word[i + 1])) {
			strcat(res,"STR ");
                        break;
                } else {
			strcat(res,"INT ");
                        break;
                }
	}
   	word = strtok(NULL, " \n\t");
	}
	return res;
}



