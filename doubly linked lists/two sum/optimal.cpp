/* 
vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
        vector<pair<int,int>> ans;
        Node * i = head;
        Node * j = i;
        while(j->next){
            j = j->next;
        }
        while(i!=j && i->data <j->data){
        if(i->data + j->data==target){
             ans.push_back({i->data,j->data});
             i= i->next;
             j= j->prev;
        }
        else if(i->data + j->data >target){
            j = j->prev;
        }
        else{
            i = i->next;
        }    
        }
        return ans;



    }


 */