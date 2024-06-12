#include<bits/stdc++.h>
using namespace std;

int binarysearch(vector<int> &nums , int n, int target){
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(target ==nums[mid]) return mid;
        else if(target> nums[mid]){
            low =mid+1;
       }
       else{
        high = mid-1;
       }
    }
    return -1;
}

int main(){
    vector<int> nums = {1,2,3,4,5,6,7};
    int n = nums.size();
    int target = 5;
    cout<<binarysearch(nums, n ,target);
}