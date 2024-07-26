#include<bits/stdc++.h>
using namespace std;


int main(){
    string s = "   -00201";
    int n = s.length();
    int i = 0 ;
    double  ans = 0 ;
    int sign = 1;
    while(i<n && s[i]==' '){
        i++;
    }
    if(s[i]=='-'){
        sign = -1;
        i++;
    }
    else if(s[i]=='+'){
        i++;
    }
    while(s[i]>='0' && s[i]<= '9'){
        ans = ans *10 + (s[i] - '0');
        i++;
    }
    if(sign==-1){
        ans = ans * -1;
    }
    ans = (ans>INT_MAX)? INT_MAX : ans;
    ans = (ans<INT_MIN)? INT_MIN : ans;
    cout<<ans;
}