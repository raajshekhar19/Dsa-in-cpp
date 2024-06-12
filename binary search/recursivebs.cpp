#include<bits/stdc++.h>
using namespace std;

int binarysearch(vector<int>&nums,int low,int high ,int target){
    if(low>high){
        return -1;
    }
    int mid = (low+high)/2;
    if(nums[mid]==target){
        return mid;
    }
    else if(nums[mid]>target){
        return binarysearch(nums, 0,mid -1,target);
    }
    else{
        return binarysearch(nums,mid+1,high,target);
    }
}


int main(){
    vector<int> nums = {1,2,3,4,5,6,7};
    int n = nums.size();
    int target = 5;
    cout<<binarysearch(nums, 0, n-1 ,target);
}