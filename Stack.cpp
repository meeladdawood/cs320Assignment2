#include <iostream>
#include "Stack.hpp"
using namespace std;

template <class T>
void Stack<T>::Push(T item){
   this->data.push_back(item);
}

template <class T>
T Stack<T>::Pop(){
   if(this->data.size() == 0){
      return -1;
   }
   int ret = this->data[this->data.size()-1];
   this->data.pop_back();
   return ret;
}

template <class T>
void Stack<T>::Print(){
   cout << "[";
   for(int i =0;i<this->data.size();i++){
      cout << this->data[i] << " ";
   }
   cout << "]" << endl;
}

template class Stack<int>;
