//brute ls
#include<bits/stdc++.h>
using namespace std;

int minrotated(vector<int> &arr, int n){
    int low = 0;
    int high = n-1;
    
    int ans = INT_MAX;
    while(low<=high){
        int mid = low +(high -low)/2;
        //check if the whole arr is sorted
        if(arr[low]<=arr[high]){
            int ans = arr[low];
            return ans;
        }
        //check which part is sorted
        if(arr[low]<=arr[mid]){
            ans = min(ans,arr[low]);
            //check the rest part
            low = mid+1;
        }
        else{
          ans = min(ans,arr[mid]);
          //check the rest part
          high = mid -1;  
        } 

    }
    return ans;
}

int main(){
    vector<int> arr ={4,5,6,7,0,1,2,3};
    int n = arr.size();
    cout<<minrotated(arr,n);
}