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
	void Push(T item);
	T Pop();
	void Print();  

};

template <class T>
Stack<T>::Stack(){
   
}

template <class T>
Stack<T>::~Stack(){

}

