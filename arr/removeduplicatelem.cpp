#include<bits/stdc++.h>
using namespace std;

int selective(int arr[], int n){
    for(int i = 0; i<n-1 ;i++){
         
         for(int j = i+1;j<n ;j++){
            if(arr[i]!=arr[j]){
                arr[i+1]=arr[j];
                i++;
            }
         }
         return i+1;
    }
}

int main(){
    int arr[6] = {1,1,2,2,3,3};
    int n  = 6;
    int size = selective(arr,n);

    for(int i = 0 ;i<size;i++){
        cout<<arr[i]<<" ";
    }

    

    
}