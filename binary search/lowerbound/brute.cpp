#include<bits/stdc++.h>
using namespace std;

int lowerbound(vector<int> &nums, int n,int x){

        for(int i =0 ;i<n;i++){
            if(nums[i]>=x){
                return i;
            }
        }
}


int main(){
    vector<int> nums = {1,2,2,3};
    int n = nums.size();
    int target = 5;
    cout<<lowerbound(nums, n,2 );
}