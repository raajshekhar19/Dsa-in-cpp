#include<bits/stdc++.h>
using namespace std;

//brute
/* 
    two for loops 
    counter after i loop initilize to 0
    if that counter is greater than the n/2 
    return number
 */
int majorityelem(vector<int> &nums, int n){

    unordered_map<long long,int> mpp;
    for(int i = 0; i<n ;i++){
        mpp[nums[i]]++;
    }
    for(auto it: mpp){
        if(it.first >n/2){
            return it.second;
        }
    }

}

int main(){
    vector<int> nums = {3,2,3};
    int n = nums.size();
    int k =majorityelem(nums,n);
    cout<<k;
}