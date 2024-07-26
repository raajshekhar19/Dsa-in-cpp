#include<bits/stdc++.h>
using namespace std;


//time complexity -> O(n)
int power(int x, int n){
    if(n==0){
        return 1;
    }
    return x * power(x, n-1);
}

int main(){
    int x,n;
    cin>>x;
    cin>>n;
    double ans=1;
    //power plus h ..
    //power neg ..
    //edge is_copy_assignable
    if(n==INT_MAX)return (x==1)? 1: (x==-1)?-1 : 0;
    if(n==INT_MIN)return (x==1)? 1: (x==-1)?1 : 0;

    if(n>0){
        ans =power(x,n);
        cout<<ans;
        return 0;
    }
    else{
        int m =- n;
        ans = power(x,m);
        cout<< (1/ans);
        return 0;
    }

}