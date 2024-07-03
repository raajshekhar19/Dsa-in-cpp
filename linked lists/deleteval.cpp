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

Node* deletek(Node* head,int k){
    if(head ==NULL){
        return head;
    }
    if(k==1){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    int counter = 0;
    Node* temp = head;
    Node* prev = NULL;
    while(temp){
        counter++;
        if(counter==k){
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

Node * deleteelem(Node * head , int elem){
    if(head==NULL) return head;
    if(head->data == elem){
        Node* temp  =head;
        head = head->next;
        delete temp;
        return head;
    }
    Node * temp = head;
    Node * prev = NULL;
    while(temp){
        if(temp->data == elem){
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}

void print(Node * head){
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}


int main(){
    vector<int> arr = {2,5,8,7};
    Node* head = convertArr2LL(arr);
    head = deleteelem(head,2);
    print(head);
    
}