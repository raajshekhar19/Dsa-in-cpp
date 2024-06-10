#include<bits/stdc++.h>
using namespace std;


//time complexity -O(2n)
//space complexity -> O(n)

int main(){
    vector<int> arr = {1,2,1,3,4,};
    int n = arr.size();
    vector<int> hsh(n+1,0);
    for(int i =0;i<n;i++){
        hsh[arr[i]]++;
    }
    for(int i =1;i<=n;i++){
        if(hsh[i]==0){
            cout<<"missing "<<i;
        }
        else if(hsh[i]==2){
            cout<<"repeating "<<i;
        }
    }
}
//brute
/* 
two loops O(n^2)
counting the same occ for the repeating 
if not found then miss
 */