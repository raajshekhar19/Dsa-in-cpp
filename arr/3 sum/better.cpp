#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {-1,0,1,2,-1,-4};
    int n = arr.size();
    set<vector<int>> st;
    for(int i =0;i<n;i++){
        set<int> hashset;
        for(int j = i+1;j<n;j++){
            int finder = -(arr[i]+arr[j]);
            if(hashset.find(finder)!=hashset.end()){
                vector<int> temp ={arr[i],arr[j],finder};
                sort(temp.begin(),temp.end());
                st.insert(temp);
            }
            hashset.insert(arr[j]);

        }
    }
    
}