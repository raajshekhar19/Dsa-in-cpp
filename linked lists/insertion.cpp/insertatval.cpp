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

Node * insertatk(Node* head, int val, int pl){
     if(head==NULL){
        return NULL;
     }
     if(pl==head->data){
        Node * temp = new Node(val);
        temp->next = head;
        return temp;
     }
    
        Node * temp = head;
        while(temp->next!=NULL){
            if(temp->next->data ==pl){
                Node * x = new Node(val);
                x->next = temp->next;
                temp->next = x;
                break;
            }
            temp = temp->next;
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
    head = insertatk(head,1,7);
    print(head);
    
}