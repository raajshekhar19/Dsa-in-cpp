#include<bits/stdc++.h>
using namespace std;


int main(){
  vector<int> nums = {3,1,-2,-5,2,-4};
    vector<int> pos;
        vector<int> neg;
        int n = nums.size();
        for(int i = 0 ; i <n;i++){
            if(nums[i]>0){
                pos.push_back(nums[i]);
            }
            else{
                neg.push_back(nums[i]);
            }
        }
        for(int i = 0 ; i<n/2;i++ ){
                    nums[2*i]= pos[i];
                    nums[2*i+1]=neg[i];
        }
        for(int i = 0 ; i<n;i++ ){
            cout<<nums[i]<<" ";
        }
}