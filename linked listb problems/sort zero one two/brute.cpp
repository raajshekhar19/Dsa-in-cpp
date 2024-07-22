/* 


    Node * temp =  head;
    int zeros = 0;
    int ones =0;
    int twos = 0;
    while(temp){
    if(temp->data==0){
        zeros++;
    }
    else if(temp->data==1){
        ones++;
    }
    else{
        twos++;
    }
    temp = temp->next;
    }

temp = head;

while(temp){
    if(zeros){
        temp->data = 0;
        temp = temp->next;
        zeros--;
    }
    else{
    if(ones){
        temp->data = 1;
        temp = temp->next;
        ones--;
    }
    else{
    temp->data=2;
    temp = temp->next;
    twos--;
    }
   }
}
return head;

 */