/* 
<-brute->

print the entire elemts in hte pascals triangle
 */

#include<bits/stdc++.h>
using namespace std;

int nCr(int n , int r){
    long long res =1;
    for(int i =0 ;i<r;i++){
        res = res*(n-i);
        res = res/(i+1);
    }
    return res;
}


int main(){
    int n = 6;
    for(int i = 1 ;i<=n;i++){
        cout<<nCr(n-1,i-1)<<" ";
    }

}