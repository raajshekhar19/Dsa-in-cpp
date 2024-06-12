#include<bits/stdc++.h>
using namespace std;

int lowerbound(vector<int> &nums, int n,int x){

       int low = 0;
       int high = n-1;
       int lb = n;
       while(low<=high){
         int mid = low +(high-low)/2;
         if(nums[mid]>=x) {
            lb = min(lb,mid);
            high = mid-1;
         }
         else{
            low = mid+1;
         }
       }
}


int main(){
    vector<int> nums = {1,2,2,3};
    int n = nums.size();
    int target = 5;
    cout<<lowerbound(nums,n,2);
}