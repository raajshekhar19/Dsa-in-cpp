#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<int> arr ={0,2,1,0,1,2,1,2,0,0,0,1};
    int  n = arr.size();

    // 0 - low-1  -> 0
    //low - mid-1  -> 1
    //mid - high  -> unsoter arr (given arr)
    //high+1 - (n-1) ->2
    int low=0;
    int mid = 0;
    int high = n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else if(arr[mid]==2){
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    for(int i = 0 ; i < n ; i ++){
        cout<<arr[i]<<" ";
    }
}