#include<bits/stdc++.h>
using namespace std;

int givecount(vector<int> &nums, int n ,int k){
    int count=0;
    for(int i = 0;i<n;i++){
        int sum=0;
        for(int j = i;j<n;j++){
            sum+=nums[j];
            if(sum>k){
                break;
            }
            else if(sum==k){
                count++;
            }
        }
    }
    return count;
}

int main(){
    vector<int> nums = {1,2,3};
    int n = nums.size();
    int k = 3;
    int ok =givecount(nums,n,k);
    cout<<ok;
}