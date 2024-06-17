#include<bits/stdc++.h>
using namespace std;

//chek if m*k < n
//else find min and max of arr
//check for min to max by iterating 
//return the day

int possible(vector<int> &arr, int day, int k, int m ){
    int counter = 0;
    int banq = 0;
    for(int i =0;i<arr.size();i++){
        if(arr[i]<=day){
            counter++;
        }
        else{
            banq+=(counter/k);
            counter=0;
        }
    }
    banq+=(counter/k);
     
     return banq>=m;

}

int roseGarden(vector<int> &arr, int k , int m){
    long long val = k*m;
    int n = arr.size();
    int day = 0;
    if(val>n){
        return -1;
    } 
    else{
        int mini = INT_MAX;
        int maxi= INT_MIN;
        
        for(int i =0;i<n;i++){
            mini = min(mini, arr[i]);
            maxi = max(maxi,arr[i]);
        }
        while(mini<=maxi){
            int mid = (mini+maxi)/2;
            if(possible(arr,mid,k,m)){
                day = mid;
                maxi = mid -1;
            }
            else{
                mini= mid +1;
            }
        }
        return day;
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