#include<bits/stdc++.h>
using namespace std;

int majorityelem(vector<int>& nums, int n){
    int counter=0;
    int it;
    for(int i = 0 ; i < n; i++){
        if(counter==0){
            counter++;
            it = nums[i];
        }
        else if(it==nums[i]){
            counter++;
        }
        else{
            counter--;
        }
        
    }
}

int main(){
    vector<int> nums = {3,2,3};
    int n = nums.size();
    int k =majorityelem(nums,n);
    cout<<k;
}