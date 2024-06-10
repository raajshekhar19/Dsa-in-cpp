#include<bits/stdc++.h>
using namespace std;

int compressed(vector<int>&arr){
    int i = 0;
    for(int j = 1; j<arr.size();j++){
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
}

int main(){
    vector<int> arr={1,1,2,2,3,3};
    int key = compressed(arr);

    for(int i = 0; i<key ;i++){
        cout<<arr[i]<<" ";
    }
}