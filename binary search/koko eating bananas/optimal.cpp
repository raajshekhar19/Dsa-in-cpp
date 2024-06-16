#include<bits/stdc++.h>
using namespace std;

int large(vector<int>&piles){
    int large = piles[0];
    for(int i =1;i<piles.size();i++){
        int large = max(large,piles[i]);
    }
    return large;
}


int timecalc(vector<int> &piles, int mid){
    int time = 0 ;
    for(int i = 0;i<piles.size();i++){
        time+=ceil((double)piles[i]/mid);
    }
    return time;
}

int rate(vector<int>&piles, int h){
    int low = 1;
    int high = large(piles);
    int ans = 0;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(timecalc(piles,mid)<=h){
            ans = mid;
            high = mid -1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}
//time complex->O(N * log(max(a[])))

int main(){
    vector<int> piles = {7, 15, 6, 3};
    int h = 8;
    cout<<rate(piles,h);
}