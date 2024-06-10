#include<bits/stdc++.h>
using namespace std;

int givecount(vector<int> &nums, int n, int k){
    //loop
    //hashmap
    //initlize as 0
    //search for psum - k
    //if not present then add psum to map along with count
    //if present add the counter
    int psum =0;
    int counter =0;
    map<int,int> hsh;
    hsh[0]=1;
    for(int i =0;i<n;i++){
        psum+=nums[i];
        int mod = psum - k;
        counter+=hsh[mod];
        hsh[psum]+=1;
    }
    return counter;
    /* 
     int psum=0, cnt=0;
        unordered_map<int, int>hsh;
        hsh[0]=1;
        for(int i=0; i<nums.size(); i++){
           psum+=nums[i];
           int mod = psum -k;
           cnt+=hsh[mod];
           hsh[psum]+=1;
        }
        return cnt; */
        /* 
        int sum=0, cnt=0;
        unordered_map<int, int>mp;
        for(int i=0; i<nums.size(); i++){
            sum+=nums[i];
            if(sum==k)cnt++;
            if(mp.find(sum-k)!=mp.end()){
                cnt+=mp[sum-k];
            }
            mp[sum]++;
        }
        return cnt; */
}

int main(){
    vector<int> nums = {1,2,3};
    int n = nums.size();
    int k = 3;
    int ok =givecount(nums,n,k);
    cout<<ok;
}