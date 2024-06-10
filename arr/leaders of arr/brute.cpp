#include<bits/stdc++.h>
using namespace std;

//brute (myn app)

//time  complexity ->O(n^2)
//space complexity -> O(n)

int main(){
    vector <int> nums ={16,17,4,3,5,2};
    int n = nums.size();
    //two loops i->n-1
    //j+1->n
    //lead =1
    //ifnums[i]>=nums[i]{
       // /continue;
    //}
    /* 
    else
    lead =0
    break
    }
    if lead ==1
      v .push elm
    
    
    
     */
    vector<int> leader={};
    for(int i =0;i<n;i++){
        int lead =1;
        for(int j = i;j<n;j++){
            if(nums[i]>=nums[j]){
                continue;
            }
            else{
                lead =0;
            }
        }
        if(lead==1){
            leader.push_back(nums[i]);
        }
    }

    for(int i =0 ;i<leader.size();i++){
        cout<<leader[i]<<" ";
    }
}