/* 
vector<int> sort_people(vector<int> names, vector<int> heights)
    unordered_map<int,sttring> mpp;
    for(int i  = 0 ; i<=names.size(); i++){
        mpp[heights[i]]=names[i];
    }
    sort(heights.begin(), heights.end());
    vector<int> ans(names.size());
    for(int i  = names.size()-1 ; i>=0 ; i--){
        ans[names.size()-1-i]=mpp[heights[i]];
    }
    return ans;
 */

// t c -> 2 O(n)  + O(nlogn)
//sc -> O(n)

/* 

map banao ->usme height as key and names as value store karo
sort the heights so the names will be sorted too in the increasing ordere
initilize the arr with sizze name.size( )
now iterate from the last and store them in arr
 */