#include<bits/stdc++.h>
using namespace std;


//time complexity -> O(n)
//ecounters only 291/303 cases

int main(){
    int x,n;
    cin>>x;
    cin>>n;
    double ans=1;
    //power plus h ..
    //power neg ..
    //edge is_copy_assignable
    if(x==0){
        cout<<0;
        return 0;
    }
    if(n==0){
        cout<<1;
        return 0;
    }
    if(n>0){
        for(int i = 1 ; i<=n; i++){
            ans = ans * x;
        }
        cout<<ans;
        return 0;
    }
    else{
        int m = -n;
        for(int i = 0 ; i<=m ;i++){
            ans = ans * x;
        }
        cout<<(1/ans);
        return 0;
    }
}