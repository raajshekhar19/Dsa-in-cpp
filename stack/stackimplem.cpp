#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
    int *arr;
    int top;
    int size;

    Stack (int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size -top > 1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"Stack overflow";
        }
    }

    void pop(int element){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack underflow";
        }
    }
    int peek(){
        if(top>=0 && top<size){
            return arr[top];
        }
        else{
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return -1;
        }
    }



};

int main(){
    Stack st(5);
    st.push(23);
    st.push(2);
    st.push(4);
    cout<<st.peek();



}