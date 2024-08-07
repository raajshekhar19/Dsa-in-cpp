#include<bits/stdc++.h>
using namespace std;

class Node {
    public :
    int data;
    Node* next;

    public :
    Node(int data1, Node* next1){ 
        data = data1;
        next = next1;
    }
    public :
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node * convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i = 1 ;i<arr.size();i++){
        Node * temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int lengthofall(Node* head){
    int counter = 0;
    Node* temp = head;
    while(temp){
        temp=temp->next;
        counter++;
    }
    return counter;
}

Node * startingptofll(Node * head){
    map<Node *, int> mpp;
    Node * temp = head;
    while(temp){
        if(mpp.find(temp)!=mpp.end()){
            return temp;
        }
        mpp[temp]=1;
        temp = temp->next;
    }
    return NULL;
}






int main(){
    vector<int> arr = {2,5,8,7};
    Node* head = convertArr2LL(arr);
    
}