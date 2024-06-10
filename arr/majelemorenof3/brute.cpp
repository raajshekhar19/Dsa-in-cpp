#include<bits/stdc++.h>
using namespace std;


//time complexity-> O(2n)
//space complexity-> O(n)

int main(){
    vector<int> arr = {1,2,1};
    int n = arr.size();
    map<int,int> hsh;
    vector<int> ans;
    for(int i =0;i<n;i++){
        hsh[arr[i]]++;
    }
    int mini = int(n/3)+1;
    for(auto it: hsh){
        if(it.second>=mini){
                ans.push_back(it.first);
        }
    }

    for(int i = 0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}