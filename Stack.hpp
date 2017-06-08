#include <iostream>
#include <vector>
using namespace std;

template <class T>
class Stack{

private:
	vector<T> data;

public:
	Stack();
	~Stack();
	bool Empty();
	void Push(T item);
	T Pop();
	void Print();  

};
