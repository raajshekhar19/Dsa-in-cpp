#include<bits/stdc++.h>
using namespace std;


void leftrotate(vector<int> &arr, int n){
        /* for(int i = 1;i<n;i++){
            swap(arr[i],arr[i-1]);
        } */

        //or

        int temp = arr[0];
        for(int i =1; i<n ;i++){
            arr[i-1]=arr[i];
        }
        arr[n-1]=temp;
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    int n = arr.size();
    leftrotate(arr, n);
    for(int i = 0 ; i<n;i++){
        cout<<arr[i]<<" ";
    }

}