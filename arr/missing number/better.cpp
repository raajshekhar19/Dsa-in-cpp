#include<bits/stdc++.h>
using namespace std;

//hashing
//time ->O(sort)+O(2n)
//space compl ->O(n+1)

int main(){
    vector<int> arr = {1};
    int n =  arr.size();
    vector<int> used(n+1);

    for(int i = 0; i <n ; i++){
           used[arr[i]]++;
    }
    
    for(int i = 0 ; i <arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i = 0 ; i <used.size();i++){
        cout<<used[i]<<" ";
    }
    for(int i = 0 ; i <n+1;i++){
        if(used[i]==0){
            cout<<i;
        }
    }

}