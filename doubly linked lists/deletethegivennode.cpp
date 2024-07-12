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


Node * deletehead(Node * head){
if(head == NULL || head->next==NULL){
    return NULL;
}

    Node * prev = head;
    head = head->next;
    head->back = nullptr;
    prev->next = nullptr;
    delete prev;
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



Node * deletekthelem(Node * head ,int k){
        if(head==NULL){
            return NULL;
        } 
        int counter = 0;
        Node * temp = head;
        while(temp!=NULL){
            counter++;
            if(counter==k){
                break;
            }
            temp= temp->next;
        }
        Node * prev = temp->back;
        Node * front = temp->next;
        if(prev==NULL && front ==NULL){
            return NULL;
        }
        else if(prev==NULL){
            return deletehead(head);
        }
        else if(front==NULL){
            return deletetail(head);
        }
        prev->next = front;
        front->back = prev;
        temp->next = NULL;
        temp->back=NULL;
        delete temp;
        return head;
           



    //k==1 rem head
    //k==2-n-1 norm
    //k==n rem tail


    return head;
}

void deleteNode(Node * temp){
    Node * prev = temp->back;
    Node * front = temp->next;

    if(front == NULL){
        prev->next = nullptr;
        temp->next=NULL;
        temp->back=NULL;
        delete temp;
        return;
    }
    prev->next = front;
    front->back = prev;
    temp->next = nullptr;
    temp->back = nullptr;
    delete temp;
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
    deleteNode(head->next);
    print(head);

}  