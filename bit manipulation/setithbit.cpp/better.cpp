#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 9;
    int k = 2;
    //find the length - k 
    //left shift 1 by that num 
    //xor it
    int len = 0;
    int copy = n;
    while(copy){
        if(copy){
            len++;
        }
        copy=copy>>1;
    }
    int shift = len - k;
    cout<<(n^(1<<shift)); 
}