#include<bits/stdc++.h>
using namespace std;

//time complexity -O(n)
//spce complexity -> O(1)

int main(){
    vector<int> arr = {1,2,1,3,4};
    int n = arr.size();
    //take the xor of all the elements and the elements from 1 to n
    //in that you will get a no 
    //find the first bit from right
    //make two storage for the elements variying from that set
    //iterating through the arr if the elemt is not found then miss

    int xr=0;
    for(int i =0;i<n;i++){
        xr =xr ^ arr[i];
        xr = xr ^ (i+1);
    }
    
    int difbit = 0;
    while(1){
        if((xr &(1<<difbit))!=0 ){
             break;
        }
           difbit++;
    }
    
    int zero =0;
    int one =0;
    for(int i =0;i<n;i++){
        if((arr[i] & (1<<difbit))!=0){
           
            one = one ^ arr[i];
        }
        else{
             zero=zero ^ arr[i];
        }
    }
    for(int i =1;i<=n;i++){
        if((i&(1<<difbit))!=0){
            one = one ^ i;
        }
        else {
            zero = zero ^ i;
        }
    }
    int count = 0;
    for(int i =0;i<n;i++){
        if(arr[i]==zero){
            count++;
        }
    }
    if (count == 2) {
        cout << "Duplicate: " << zero << endl;
        cout << "Missing: " << one << endl;
    } else {
        cout << "Duplicate: " << one << endl;
        cout << "Missing: " << zero << endl;
    }


}