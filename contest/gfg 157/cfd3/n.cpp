#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a;
        cin>>b;
        int ans = a + b*2;
        if(ans%2==0){
            if(a==0 && b!=0){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
        else{
            cout<<"no"<<endl;
        }
    }
}