#include<bits/stdc++.h>
using namespace std;

//tc-> O(n)
//sc->  O(1)

int main(){
    vector<int> nums={-2,1,-3,4,-1,2,1,-5,4};
    int n = nums.size();
    int sum=0;
    int maxi = INT_MIN;
    for(int i = 0 ; i < n ; i ++){
        sum+=nums[i];
        if(sum>maxi){
            maxi =sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    cout<<maxi;
}