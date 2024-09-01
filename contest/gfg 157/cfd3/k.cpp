#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l;
        cin>>r;
        if(l==r){
            cout<<1<<endl;
        }
        else{
            int size = 1;
            int c =1;
            while(l+c<=r){
                size++;
                l=l+c;
                c++;
            }
            cout<<size<<endl;
        }
    }
}