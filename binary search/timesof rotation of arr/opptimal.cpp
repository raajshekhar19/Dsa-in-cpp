
//brute ls
#include<bits/stdc++.h>
using namespace std;

int minrotated(vector<int> &arr, int n){
    int low = 0;
    int high = n-1;
    int ans = INT_MAX;
    int idx = -1;
    while(low<=high){
        int mid = low +(high -low)/2;
        //if whole arr is sorted
        if(arr[low]<= arr[mid] && arr[mid]<=arr[high]){
            if(arr[low]<=ans){
                ans = arr[low];
                idx = low;
                break;
            }
        }
        //check which part is sorted 
        if(arr[low]<=arr[mid]){
            if(arr[low]<=ans){
                ans = arr[low];
                idx = low;
            }
            low = mid +1;
        }

        else{
            if(arr[mid]<=arr[high]){
                ans = arr[mid];
                idx = mid;
            }
            high = mid-1;
        }
    }
    return idx;
    
}

int main(){
    vector<int> arr ={4,5,6,7,0,1,2,3};
    int n = arr.size();
    cout<<minrotated(arr,n);
}