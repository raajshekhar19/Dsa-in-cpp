#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>foursum(vector<int> &nums){
    int n = nums.size();
    vector<vector<int>> ans;
    set<vector<int>> here;
    for(int i =0;i<n;i++){
        for(int j =i+1 ;j<n;j++){
            set<int> st;
            for(int k = j+1;k<n;k++){
                int fourth = -(nums[i]+nums[j]+nums[k]);
                if(st.find(fourth)!=st.end()){
                        vector<int> temp = {nums[i],nums[j],nums[k],fourth};
                        sort(temp.begin(),temp.end());
                        here.insert(temp);
                }

            }
        }
    }
    
}

int main(){
     vector<int> nums= {-2,0,2,2,2};
     foursum(nums);
}