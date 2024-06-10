#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 6;
    int arr[6] = {13, 46, 24, 52, 20, 9};
    

    //get the min and swap

    for(int  i = 0 ; i <n-1; i++){

        int  min = i;
        for(int j = i ; j < n; j++){
                if(arr[j]<arr[min]){
                    min = j;
                }
        }
        swap(arr[min],arr[i]);
    }
    

    for(int  i = 0 ; i <n ; i++){
        cout<<arr[i]<<" ";
    }
}

//tc n^2