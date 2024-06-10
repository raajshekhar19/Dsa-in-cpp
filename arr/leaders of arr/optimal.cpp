#include<bits/stdc++.h>
using namespace std;

//time compl -> O(N)+O(NlogN)if sorted
//space complex -> O(N)
int main(){
    vector <int> nums ={16,17,4,3,5,2};
    int n = nums.size();
    vector<int> mod ={};
    int large = INT_MIN;
    for(int i = n-1; i>=0;i--){
        if(nums[i]>=large){
            large=nums[i];
            mod.push_back(large);
        }
    }
    for(int i = 0;i<mod.size();i++){
        cout<<mod[i]<<" ";
    }
}