#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"Tokenizer.hpp"


int main(int argc, char *argv[]){
	Tokenizer tokens;

	int times = 0;
	printf("Assignment #2-2, Meelad Dawood, mdawood2@sdsu.edu\n");
	times = atoi(argv[1]);
	

	string leave = "quit";
	for(int i = 0; i < times ; i++){
		tokens.GetTokens();
		if(tokens.strings.size()== 1 && strcasecmp(tokens.strings.at(0).c_str(),leave.c_str())==0){
			exit(0);
			
		} else if(tokens.strings.size() ==1){
			printf("STR\n");
		}

		
		if(tokens.strings.size()== 2){
                        printf("STR INT\n");
                }

	}

}


