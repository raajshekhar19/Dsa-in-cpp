#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i = 0;i<n;i++){
            cin>>arr[i];
        }
        int flag = true;
        for(int i = 1;i<n;i++){
            if(abs(arr[i]-arr[i-1])==5 || abs(arr[i]-arr[i-1])==7){
                continue;
            }
            else{
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}