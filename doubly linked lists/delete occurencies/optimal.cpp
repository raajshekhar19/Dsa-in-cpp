/* 
void deleteAllOccurOfX(struct Node** head_ref, int x){
    if(*head_ref==NULL) return;
    Node * head = *head_ref;
    while(head!=NULL and head->data==x) head = head->next;

    if(head!=NULL) head -> prev = NULL;
        *head_ref = head;
        Node* prev = head;
        while(head!=NULL){
            while(head->next!=NULL and head->next->data==x){
                    head->next = head->next->next;
                    if(head->next!=NULL) head->next->prev = prev;
                }
                prev = head;
                head = head -> next;
            }



}

 */