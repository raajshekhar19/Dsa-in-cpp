#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 6;
    int arr[6] = {13, 46, 24, 52, 20, 9};
    
    for(int  i = 0 ; i<n ; i++){
        int j = i;
        
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j],arr[j-1]);
            j--;
        }
       
    }

    for(int i = 0 ; i <n ;i++){
            cout<<arr[i]<<" ";
    }

}