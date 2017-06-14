#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"Tokenizer.hpp"

Tokenizer::Tokenizer(){
    vector<string> strings;
}


vector<string>* Tokenizer::GetTokens(){
    cout << str << endl;
    istringstream f(str);
    string s;
    while (getline(f, s, ' ')) {
        strings.push_back(s);
    }
}

Tokenizer::~Tokenizer(){

}



