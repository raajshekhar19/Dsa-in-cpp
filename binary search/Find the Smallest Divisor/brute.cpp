#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> &arr, int n ,int ok, int limit){
        int counter = 0;
        for(int i =0;i<n;i++){
            counter+=ceil((double)(arr[i]) / (double)(ok));
        }
        return counter<=limit;
}

int smalldivisisor(vector<int> &arr, int n , int limit){
    if(n>limit) return -1;
    int maxi = *max_element(arr.begin(), arr.end());
    for(int i =1;i<=maxi;i++){
        if(solve(arr,n,i,limit)){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int> arr={1,2,3,4,5};
    int n = arr.size();
    int limit = 8;
    cout<<smalldivisisor(arr,n,limit);
}