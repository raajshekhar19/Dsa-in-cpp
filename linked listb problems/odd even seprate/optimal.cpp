/* 
 Node * odd = head;
 Node * even = head->next;
 Node * evenHead = head->next;

 while(even!=NULL && even->next==NULL){
    odd->next = odd->next->next;
    even->next=even->next->next;
    odd= odd->next;
    even = even->next;
 }

 odd->next = evenhead;
 return head;

 */