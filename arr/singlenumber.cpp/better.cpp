#include<bits/stdc++.h>
using namespace std;

//time complexity - > O(NlogM)+O(N/2+1)
//space complexity -> O(N/2+1)

int main(){
    vector<int> arr ={-1};
    int n = arr.size();
    map<long long,int> mpp;
    for(int i = 0 ; i<arr.size();i++){
        mpp[arr[i]]++;
    }
    for(auto it: mpp){
        if(it.second==1){
            cout<<it.first;
        }
    }


}