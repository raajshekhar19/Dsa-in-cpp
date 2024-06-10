#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> arr ={4,2,5,1};
    int n = 5;
    int xor1 =0;
    int xor2 = 0 ;
    for(int i = 0; i <n-1; i++){//n is onw greater than the arr
        xor1=xor1^(i+1);
        xor2 = xor2^arr[i];
    }

    xor1 = xor1^n;
    //as the last element is left

    int k =xor1^xor2;
    cout<<k;



}