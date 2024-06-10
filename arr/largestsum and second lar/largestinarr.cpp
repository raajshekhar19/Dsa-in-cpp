#include<bits/stdc++.h>
using namespace std;

int largestOfArr(int arr[], int n){
    int largest=arr[0];
    for(int i =1; i<n;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    return largest;
}

int main(){
    int arr[5]={8,2,3,1,5};
    int n =5;
    int largest = largestOfArr(arr,n);
    cout<<largest;
    
}