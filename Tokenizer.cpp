#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"Tokenizer.hpp"

char* token(char *copy);

Tokenizer::Tokenizer(){
    vector<string> strings;
}


vector<string>* Tokenizer::GetTokens(){
    /* string line;
    printf("> ");
    getline(cin, line);
    str = line;
    istringstream f(str);
    string s;
    while (getline(f, s, ' ')) {
         cout << s << endl;
         strings.push_back(s);
    }
    cout << strings.size() << endl;
    */

while (1) {
	char line[65];
	printf("> ");
	fgets(line, 65, stdin);
	char copy[65];
	strcpy(copy, line);
	char *word;
	char leave[]= "quit";
	word = strtok(line, " \n\t");
	while (word != NULL) {
		strings.push_back(word);
		word = strtok(NULL, " \n\t");
	}

	if (strings.size() > 2) {
                strings.clear();
		printf("ERROR! Incorrect number of tokens found.\n");
		continue;
	} else if(strcasecmp(strtok(copy,"\n"),leave)==0){
                       exit(0);
        } else if(strings.size() == 2){
		char* str = token(copy);
		if(!strcmp(str,"STR INT ")==0){
			strings.clear();
			printf("ERROR! Expected STR INT.\n");
		} else {
			return &strings;
		}
	} else if(strings.size() == 1){
                char* str = token(copy);
                if(!strcmp(str,"STR ")==0){
                        strings.clear();
                        printf("ERROR! Expected STR.\n");
                } else {
			return  &strings;
                }
 
	} else if (strings.size() == 0) {
		printf("ERROR! Incorrect number of tokens found.\n");
		continue;
	} else {
	//	token(copy);
	}
}



}

Tokenizer::~Tokenizer(){

}

/*
int main(){
Tokenizer tokens;

tokens.GetTokens();


}
*/


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


