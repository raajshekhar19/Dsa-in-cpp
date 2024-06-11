#include<bits/stdc++.h>
using namespace std;
void mergeoverlapp(vector<vector<int>> &arr,int n,int m){
    vector<vector<int>> ans;
    //sort
    sort(arr.begin(),arr.end());
    for(int i =0;i<n;i++){
        if(ans.empty() || ans[i][0]>arr.back()[1]){
            ans.push_back(arr[i]);
        }
        else{
                arr.back()[1]=max(arr.back()[1],arr[i][1]);
        }
    }
}


int main(){
    vector<vector<int>> arr ={{1,2},{2,6},{8,9}};
    int n = arr.size();
    int m = arr[0].size();
    mergeoverlapp(arr,n,m);
}