#include<bits/stdc++.h>
using namespace std;

//only valid for the positive numbers

int main(){
    vector<int> arr ={4,1,2,1,2};
    int n = arr.size();
    vector<int> hsh(n+1,0);
    for(int i = 0 ; i < n ; i ++){
        hsh[arr[i]]++;
    }
    for(int i = 0 ; i <hsh.size() ; i++){
        if(hsh[i]==1){
            cout<<endl;
            cout<<i;
        }
    }
}