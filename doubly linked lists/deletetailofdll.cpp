#include<bits/stdc++.h>
using namespace std;

class Node {
    public :
    int data;
    Node* next;
    Node * back;

    public :
    Node(int data1, Node* next1, Node * back1){ 
        data = data1;
        next = next1;
        back = back1;
    }
    public :
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node *convertToDoublyLL(vector<int> & arr){
    Node * head = new Node(arr[0]);
    Node* prev = head;
    for(int i = 1;i<arr.size();i++){
        Node * temp = new Node(arr[i],nullptr,prev);
        prev->next= temp;
        prev= temp;

    }
    return head;
}
Node * deletetail(Node * head){
    if(head==NULL|| head->next!=NULL  ){
        return NULL;
    }
    Node *tail = head;
    while(tail->next!=NULL){
        tail = tail->next;
    }
    Node * prev =tail->back;
    prev->next=nullptr;
    tail->back =nullptr;
    delete tail;
    return head;
}



void print(Node * head){
    Node * temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
}

int main(){
    vector<int> arr = {12,5,8};
    int n = arr.size();
    Node  * head = convertToDoublyLL(arr);
    head = deletetail(head);
    print(head);

}  