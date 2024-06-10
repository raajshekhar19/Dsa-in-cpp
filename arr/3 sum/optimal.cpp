#include<bits/stdc++.h>
using namespace std;


void threesum(vector<int> &nums){
    vector<vector<int>>ans;
    int n = nums.size();
    sort(nums.begin(),nums.end());
    for(int i = 0;i<n;i++){
        int j = i+1;
        int k = n-1;
        while(j<k){
            if(i!=0 && nums[i]==nums[i-1])continue;
            int sum = nums[i]+nums[j]+nums[k];
            if(sum<0){
                j++;
            }
            else if(sum>0){
                k--;
            }
            else{
                vector<int> temp = {nums[i],nums[j],nums[k]};
                ans.push_back(temp);
                j++;
                k--;
                while(j<k && nums[j]==nums[j-1])j++;
                while(j<k && nums[k]==nums[k+1])k--;

            }
        }
    }
}


int main(){
    vector<int> nums= {-2,0,2,2,2};
    threesum(nums);
}