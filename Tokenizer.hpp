#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

class Tokenizer
{
   public:
//	Tokenizer();
	Tokenizer(string line);
	~Tokenizer();
	vector<string>* GetTokens();

   private: 
	vector<string> strings;
	string str;
};



//Tokenizer::Tokenizer(){
//    vector<string> strings;
//}

Tokenizer::Tokenizer(string line){
    vector<string> strings;
    str = line;
}


Tokenizer::~Tokenizer( ){
    
}

vector<string>* Tokenizer::GetTokens(){
    cout << str << endl;
    istringstream f(str);
    string s;    
    while (getline(f, s, ' ')) {
        strings.push_back(s);
    }
}

