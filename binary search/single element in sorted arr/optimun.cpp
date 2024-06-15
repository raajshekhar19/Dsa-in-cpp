//brute 
/*
use the xor 
time complexity -> O(n)  */

#include<bits/stdc++.h>
using namespace std;

int mininarr(vector<int> & arr, int n){
    //edege cases
    if(n==1) return arr[0];
    if(arr[0]!=arr[1]) return arr[0];
    if(arr[n-2]!=arr[n-1]) return arr[n-1];
    int low = 1;
    int high = n-2;
    while(low<=high){
        int mid = low +(high -low)/2;
        if(arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1]) return arr[mid];

        //eleiminitaing the side
        if((mid%2==1 && arr[mid]==arr[mid-1])||(mid%2==0 && arr[mid]==arr[mid+1])){
            low = mid+1;
        }
        else{
            high = mid -1;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};
    int n = arr.size();
    cout<<mininarr(arr,n);
}