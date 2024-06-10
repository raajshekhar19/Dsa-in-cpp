#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums={-2,1,-3,4,-1,2,1,-5,4};
    int n = nums.size();
    int maxsum=0;
    //move over entire subarr
    for(int i = 0 ; i < n ; i ++){
        for(int j =i; j <n ;j++){
            int sum=0;
            for(int k = i;k<=j;k++){
                sum+=nums[k];
            }
            maxsum=max(maxsum,sum);
        }
    }
    cout<<maxsum;

}