#include<bits/stdc++.h>
using namespace std;


//bekar

int main(){
    vector<int> arr = {7,1,5,3,6,4};
    int n = arr.size();
    int smallest =arr[0];
    int idx=0; 
    for(int i = 1 ; i < n ; i ++){
        if(arr[i]<smallest){
            smallest =arr[i];
            idx =i;
        }
    }
    cout<<smallest<<" "<<idx<<endl;

    //finding the smallest idx
    //from that idx +1 to last idx finfd a element greater tahn it
    int larger = INT_MIN;
    for(int j= idx+1 ;j<n ;j++){
            if(arr[j]>smallest){
                larger=max(arr[j],larger);
            }
    }
    cout<<larger;
    if(larger==-1){
        cout<<"not";
    }
    else{
        cout<<larger-smallest;
    }



}