/* 
Node * i = head;
Node * j;
vector<pair<int,int>> ans;
while(i){
    j = i->next;
    while(j){
        if(j->data +i->data==x){
           ans.push_back({i->data,j->data});
        }
       j = j->next;
    }
    i = i->next;
}
return ans;


 */