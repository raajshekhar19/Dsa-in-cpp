#include<bits/stdc++.h>
using namespace std;
vector<int> twosum (vector<int> &arr, int target){
    map<int,int> mpp;
    for(int i = 0 ;i<arr.size(); i++){
        int a = arr[i];
        int more =  target - a;
        if(mpp.find(more)!=mpp.end()){
            int j = mpp[more];
            return {j,i};
        }
        mpp[a]= i;
    }
}

int main(){
    vector<int> arr = {2,6,8,11,5};
    int target = 14;
    vector<int> ans =twosum(arr,target);
    for(int i = 0 ; i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}