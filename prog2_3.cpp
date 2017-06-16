#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"Tokenizer.hpp"
#include "Stack.cpp"


int main(int argc, char *argv[]){
	Tokenizer tokens;
	Stack<int> stack;

	int times = 0;
	printf("Assignment #2-3, Meelad Dawood, mdawood2@sdsu.edu\n");
	times = atoi(argv[1]);
	

	string leave = "quit";
	for(int i = 0; i < times ; i++){
		vector<string> *ptr = tokens.GetTokens();
		if(ptr->size()== 1 && strcasecmp(ptr->at(0).c_str(),leave.c_str())==0){
			exit(0);
			
		} else if(ptr->size() ==1 && strcmp(ptr->at(0).c_str(),"pop")==0){
			stack.Pop();			
		}

		
		if(ptr->size()== 2 && strcmp(ptr->at(0).c_str(),"push")==0){
                	stack.Push(atoi(ptr->at(1).c_str()));
			
		}

	}
	stack.Print();

}



