// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
template<typename T>
using namespace std;

class Stack{
    T *data;
    int nextIndex;
    int capacity;
    public:
    Stack(){
        data = new T[2];
        capacity = 2;
        nextIndex = 0;
    }
    T size(){
        return nextIndex;
    }
    bool isEmpty(){
        if(nextIndex == 0) {return true;}
        else {return false;}
    }
    void push(T element){
        if(nextIndex == capacity) {
            int *newData = new T[2*capacity];
            for(int i = 0; i<capacity; i++){
                newData[i] = data[i];
            }
            capacity*= 2;
            delete [] data;
            data = newData;
        }
        data[nextIndex] = element;
        nextIndex++;
    }
    void pop(){
        if(isEmpty()) {
            cout<<"stack empty"<<endl;
            //return INT_MIN;
    }
    nextIndex--;
    cout<<data[nextIndex];
    }
    T top(){
        if(isEmpty()){
            cout<<"Empty";
            //return INT_MIN;
        }
        return data[nextIndex-1];
    }
    
};

int main() {
    // Write C++ code here
    std::cout << "Hello world!"<<endl;
    Stack <int> s;
    s.push(4);
    s.push(5);
    s.push(6);
    //s.pop();
    std::cout<<s.top();
    //std::cout<<s.pop();
    std::cout<<s.size();

    return 0;
