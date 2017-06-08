#include <iostream>
#include <vector>
#include "Stack.hpp"
using namespace std;

template <class T>
Stack<T>::Stack()
{
        vector<T> data;
}


template <class T>
bool Stack<T>::Empty()
{
	return data.empty();
}

template <class T>
void Stack<T>::Push(T item)
{
	data.push_back(item);

}


template <class T>
T Stack<T>::Pop() 
{
	if(data.Empty()){
	   throw out_of_range("Stack Empty!");
	} else { 
	T temp = data.pop_back();
	return temp;
	}
}

