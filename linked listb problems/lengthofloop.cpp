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

Node * startingptofloopll(Node * head){
    Node * slow = head;
    Node * fast = head;

    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast= fast->next->next;
        if(slow ==fast){
            slow = head;
            while(slow!=fast){
                slow = slow ->next;
                fast = fast->next;
            }
            return slow;
        }
    }
    return NULL;
}


int main(){
    vector<int> arr = {2,5,8,7};
    Node* head = convertArr2LL(arr);
    
}