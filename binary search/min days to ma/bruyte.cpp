#include<bits/stdc++.h>
using namespace std;

int minidays(vector<int> &arr, int day ,int m, int k){
    int count = 0;
    int noofday = 0;
    for(int i =0;i<arr.size();i++){
        if(arr[i]<=day){
            count++;
        }
        else{
            noofday+=(count/k);
            count=0;
        }
    }
    noofday+=(count/k);
    return noofday>=m;
}


int roseGarden(vector<int>&arr, int k, int m){
    int n = arr.size();
    if(n<k*m) return -1;
    else{
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for(int i  =0;i<n;i++){
            mini = min(mini,arr[i]);
            maxi = max(maxi,arr[i]);
        }
        for(int i = mini;i<=maxi ;i++){
            if(minidays(arr,i,m,k)){
                return i;
            }
        }
        return -1;
    }

}


int main(){
     vector<int> arr = {7, 7, 7, 7, 13, 11, 12, 7};
    int k = 3;
    int m = 2;
    int ans = roseGarden(arr, k, m);
    if (ans == -1)
        cout << "We cannot make m bouquets.\n";
    else
        cout << "We can make bouquets on day " << ans << "\n";
    return 0;
}