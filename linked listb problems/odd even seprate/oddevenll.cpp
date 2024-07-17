/*     #include<bits/stdc++.h>
    using namespace std;
    
    ListNode* oddEvenList(ListNode* head) {

        if(head==NULL|| head->next==NULL){
            return head;
        }
        ListNode* temp = head;
        vector<int> ans;
        while(temp!=NULL && temp->next!=NULL){
            ans.push_back(temp->val);
            temp = temp->next->next;
        }
        if(temp){
            ans.push_back(temp->val);
        }
        ListNode *ntemp = head->next;
        while(ntemp!=NULL && ntemp->next!=NULL){
            ans.push_back(ntemp->val);
            ntemp = ntemp->next->next;
        }
        temp = head;
    for (int i = 0; i < ans.size(); ++i) {
        temp->val = ans[i];
        temp = temp->next;
    }
    return head;
        
    }

     */