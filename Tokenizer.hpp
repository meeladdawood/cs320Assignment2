#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

class Tokenizer
{
   public:
	Tokenizer();
//	Tokenizer(string line);
	~Tokenizer();
	vector<string>* GetTokens();

   private: 
	vector<string> strings;
	string str;
};



