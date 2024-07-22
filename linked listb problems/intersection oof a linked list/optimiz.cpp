/* 

 ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int l1  = 0;
        int l2 = 0;
        ListNode * temp = headA;
        while(temp){
            l1++;
            temp = temp->next;
        }
        temp = headB;
        while(temp){
            l2++;
            temp = temp->next;
        }
        if(l1>l2){
            int diff = l1 -l2;
            ListNode * itl1 = headA;
            while(diff){
                itl1 = itl1->next;
                diff--;
            }
            ListNode * itl2 = headB;
            while(itl1){
                if(itl1==itl2){
                    return itl1;
                }
                itl1 = itl1->next;
                itl2 = itl2->next;
            }
            return NULL;
        }
        else{
            int diff = l2 -l1;
            ListNode * itl2 = headB;
            while(diff){
                itl2 = itl2->next;
                diff--;
            }
            ListNode * itl1 = headA;
            while(itl1){
                if(itl1==itl2){
                    return itl1;
                }
                itl1 = itl1->next;
                itl2 = itl2->next;
            }
            return NULL;
        }
 */