#include<bits/stdc++.h>
using namespace std;

int setBit(int n) {
        // Write Your Code here
        string ans = "";
        while(n){
            if(n&1){
                ans = ans +'1';
            }
            else{
                ans =ans+'0';
            }
            n=n>>1;
        }
        reverse(ans.begin(),ans.end());
        int zeroFound = 0;
        for(int i = ans.length()-1 ;i>=0;i--){
            if(ans[i]=='0'){
                ans[i]='1';
                zeroFound = 1;
                break;
            }
        }
        int num = 0;
        int p2 = 1;
        if(zeroFound){
            for(int i = ans.length()-1;i>=0;i--){
            if(ans[i]=='1'){
                num +=p2;
            }
            p2 = p2*2;
          }
        }
        else{
            for(int i = ans.length()-1;i>=0;i--){
            if(ans[i]=='1'){
                num +=p2;
            }
            p2 = p2*2;
          }
           num+=p2; 
        }
        return num;
    }

int main(){
    int n = 15;
    cout<<setBit(n);

}