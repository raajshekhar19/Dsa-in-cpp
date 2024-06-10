#include<bits/stdc++.h>
using namespace std;

int func(vector<int>&arr,int k){
    int n = arr.size();
    int xr =0;
    int counter = 0;
    map<int,int> mpp;
    mpp[0]=1;
    for(int i =0;i<n;i++){
        xr =xr^arr[i];
        
        int x = xr^k;
        /* if(mpp.find(x)!=mpp.end()){
            counter=counter+mpp[x];
        } */
       counter+=mpp[x];
        mpp[xr]++;

    }
    cout<<counter;
}

int main(){
    vector<int> arr = {4,2,2,6,4};
    int k = 6;
    func(arr,k);
}