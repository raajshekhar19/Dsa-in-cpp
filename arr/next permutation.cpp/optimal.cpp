#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> num = {1,2,3};
    int n = num.size();
    //find the pivot
    //find the nearsest largest num
    //swap with idx
    //reverse the rest part of the arr
     int idx =-1;
    for(int i = n-2; i>=0;i--){
        if(num[i]<num[i+1]){
            idx =i;
            break;
        }
    }
    cout<<idx<<endl;
    
    if(idx ==-1){
        reverse(num.begin(),num.end());
    }
    else{
        for(int i = n-1 ;i>idx ;i--){
        if(num[i]>num[idx]){
            swap(num[i],num[idx]);
            break;
        }
    }

    reverse(num.begin()+idx+1,num.end());
    for(int i=0;i<n;i++){
        cout<<num[i]<<" ";
    }
    }

}