/*
if(head==NULL|| head->next==NULL){
    return head;
}

Node * zerohead = new Node (-1);
Node* zero = zerohead;
Node * onehead = new Node (-1);
Node * head =one;
Node * twohead = new Node (-1);
Node * two = twohead;
Node * temp = head;
while(temp){
if(temp->data==0){
    zero->next = temp;
    zero =temp;
}
else if(temp->data == 1){
        one->next = temp;
        one = temp;
}
else{
    two->next = temp;
        two = temp;
    }
temp = temp->next;
}

zero->next = onehead->next? onehead->next: twoheaad->next;
one->next = twohead->next;
twohead->next = NULL;
delete onehead;
delete twohead;
return zerohead->next;

 */