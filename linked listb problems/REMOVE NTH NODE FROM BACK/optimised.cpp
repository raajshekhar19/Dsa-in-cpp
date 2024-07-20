/* ListNode* removeNthFromEnd(ListNode* head, int n) {
         ListNode*  fast = head;
         ListNode* slow = head;
         for(int i = 1; i <=n ; i++){
            fast = fast->next;
         }
         if(fast==NULL){
            ListNode *t = head;
            head = head->next;
            delete t;
            return head;
         }
         while(fast->next!=NULL){
            fast = fast->next;
            slow = slow->next;
         }
         ListNode* dummy = slow->next;
         slow ->next = slow->next->next;
         delete dummy;
         return head;
    } */