#include<bits/stdc++.h>
using namespace std;


int main(){
  vector<int> nums = {3,1,-2,-5,2,-4};
  int n = nums.size();
  int posidx =0;
  int negidx =1;
  vector<int> mod(n);
  for(int i=0;i<n;i++){
    if(nums[i]>0){
        mod[i]=nums[posidx];
        posidx+=2;
    }
    else{
        mod[i]=nums[negidx];
        negidx+=2;
    }
  }
  for(int i =0 ;i<mod.size();i++){
    cout<<mod[i]<<" ";
  }
}