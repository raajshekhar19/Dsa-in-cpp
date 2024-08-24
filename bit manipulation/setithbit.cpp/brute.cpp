#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 9;
    int k = 2;
    string num = "";
    while(n){
        if(n&1){
            num = '1' + num;
        }
        else{
            num = '0' + num;
        }
        n = n>>1;
    }
    cout<<num<<endl;
    num[k-1]='1';
    cout<<num<<endl;
    int ans = 0;
    int p2 = 1;
    for(int i =num.size()-1;i>=0;i--){
        if(num[i]=='1'){
            ans = ans + p2;
        }
        p2 = p2 *2;
    }
    cout<<ans;

}