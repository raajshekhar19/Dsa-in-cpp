
// time complexity - > O(n + n-k)
//space complexity - > O(1)


/* ListNode* removeNthFromEnd(ListNode* head, int n) {

        int length = 0;
        ListNode * temp = head;
        while(temp){
            length++;
            temp = temp->next;
        }
        int k = length - n;
        if(length == n){
            ListNode * temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
            return head; 
        }

        else{
            ListNode * temp = head;
            int counter = 0;
            while(temp){
                counter++;
                if(counter==k){
                    break;
                }
                temp= temp->next;
            }
            ListNode * dummy = temp->next;
                    temp->next = temp->next->next;
                    dummy->next = NULL;
                    delete dummy;
                    return head;
        }
    } */