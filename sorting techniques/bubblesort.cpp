#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 6;
    int arr[6] = {13, 46, 24, 52, 20, 9};

    //get the max and swap

    /* for(int  i = n-1 ; i >=0;i--){
        int max = i;
        for(int j = i ; j>=0;j--){
            if(arr[j]>arr[max]){
                max = j;
            }
        }
        swap(arr[i],arr[max]);
    } */

    for(int i = n-1 ; i>=0 ; i--){
        
        for(int j = 0 ;j <=i-1 ; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                
            }
        }
        
    }

    for(int  i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}