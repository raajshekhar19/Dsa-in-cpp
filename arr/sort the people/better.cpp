/* 
map<int, string> mpp;
for(int i = 0; i < names.size();i++){
mpp[heights[i]]=names[i];
}
vector<int> asn;
int idx = names.size()-1;
for(auto & it : mpp){
    ans[idx]=it.second;
    idx--;
}
return idx;

 */

/* 
map use karo usse keys apne aap sort ho jate h
uske baad ans naam k arr jiska size names.size
usme back se push kar de
 */