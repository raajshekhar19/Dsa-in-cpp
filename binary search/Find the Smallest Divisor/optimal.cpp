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
    int mini = INT_MAX;
    int maxi =INT_MIN;
    for(int i =0 ;i<n;i++){
        mini = min(mini,arr[i]);
        maxi =max(maxi,arr[i]);
    }
    int low = mini;
    int high = maxi;
    while(low<=high){
        int mid = low + (high -low)/2;
        if(solve(arr,n,mid,limit)){
            high = mid -1;
        }
        else{
            low = mid +1;
        }
    }
    return low;
}

int main(){
    vector<int> arr={1,2,3,4,5};
    int n = arr.size();
    int limit = 8;
    cout<<smalldivisisor(arr,n,limit);
}