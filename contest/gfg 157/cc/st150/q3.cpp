#include <bits/stdc++.h>
using namespace std;

void operation (vector<int>& nums){
    int mini = nums[0];
    int maxi = nums[nums.size()-1];
    int sum = mini + maxi;
    nums.pop_back();
    for( int i = 0;i<nums.size()-2;i++){
        nums[i]=nums[i+1];
    }
    nums.pop_back();
    nums.pop_back();
    nums.push_back(sum);
    
}

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> nums(n);
        for( int i = 0;i<n;i++){
            cin>>nums[i];
        }
        while(k--){
            operation(nums);
        }
        for( int i = 0;i<nums.size()-1;i++){
            cout<<nums[i]<<" ";
        }
    }


}