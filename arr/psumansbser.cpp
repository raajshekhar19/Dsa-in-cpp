#include<bits/stdc++.h>
using namespace std;



bool bsearch(vector<int>&nums, int target){
        int low = 0;
        int high = nums.size() - 1;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(nums[mid]==target){
                return true;
            }
            else if(nums[mid]>target){
                high = mid -1;
            }
            else{
                low = mid + 1;
            }
        }
        return false;
    }

    int finder(vector<int>&nums, int target){
        if(bsearch(nums,target)){
            target++;
            return bsearch(nums,target);
            
        }
        else{
            return target;
        }
    }
    bool contains(vector<int>&arr, int value) {
        for (auto num:arr) {
            if (num == value)
                return true;
        }
        return false;
    }


    int missingInteger(vector<int>& nums) {
        /* 
        find the llongest prefix sequesntial sum
        find the find sum of the element if not present return else add 1 and find
         */
        
        int psum = nums[0];
        int psumMax =nums[0];
        for( int i = 1;i<nums.size();i++){
            if(nums[i]==(nums[i-1]+1)){
                psum = psum + nums[i];
            }
            else{
                break;
            }
        }
        cout<<psum<<endl;

        /* sort(nums.begin(),nums.end()); */
        /* for(int i = 0;i<nums.size();i++){
            cout<<nums[i]<<endl;
        } */
        /* int ans = finder(nums,psum);
        return ans; */

    }
    int main(){
    vector<int> nums = {3,4,5,1,12,14,13};
    cout<<missingInteger(nums);
}