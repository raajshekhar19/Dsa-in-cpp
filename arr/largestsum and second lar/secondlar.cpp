#include<bits/stdc++.h>
using namespace std;

int secondlargestOfArr(int arr[], int n ){
    int large = arr[0];
    int sl = INT_MIN;
    for(int i= 1;i < n;i++){
          if(arr[i]>large){
            sl = large;
            large = arr[i];
          }
          else if(arr[i]!=large && arr[i]>sl){
            sl = arr[i];
          }
    }
    if(sl!=large){
        return sl;
    }
    else{
        return -1;
    }
}

int main(){
    int arr[5] ={5,4,3,2,1};
    int n = 5;
    int sl = secondlargestOfArr(arr,n);
    cout<<sl; 
}