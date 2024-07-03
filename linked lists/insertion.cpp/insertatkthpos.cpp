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

Node * insertatk(Node* head, int val, int k){
     if(head==NULL){
        if(k==1){
            return new Node(val);
        }
        else{
            return NULL;
        }
     }
     if(k==1){
        Node * temp = new Node(val);
        temp->next = head;
        return temp;
     }
    
        int counter = 0;
        Node * temp = head;
        while(temp){
            counter++;
            if(counter==(k-1)){
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
    head = insertatk(head,1,2);
    print(head);
    
}