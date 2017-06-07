#include <iostream>
#include <vector>

using namespace std;

class Tokenizer
{
   public:
	Tokenizer(string);
	~Tokenizer();
	vector<string>* GetTokens();

   private: 
	string str;
};

Tokenizer::Tokenizer(string input){
     str = input;
}

Tokenizer::~Tokenizer( ){
    
}

