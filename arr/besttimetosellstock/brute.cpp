#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<int> arr = {7,5,4,3,2,1};
    int n = arr.size();
    int maxi= 0;
    for(int i = 0 ; i < n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[j]>arr[i]){
                int diff= arr[j]-arr[i];
                maxi = max(maxi,diff);
            }
        }
    }
    cout<<maxi;
}