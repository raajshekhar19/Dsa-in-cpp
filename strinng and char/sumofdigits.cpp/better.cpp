#include<bits/stdc++.h>
using namespace std;

int convert(double q){
    double sum = 0;
    while(q){
        int rem = q%10;
        sum = sum + rem;
        q = q/10;
    }
    return sum;
   
}

double sttoint(string ans){
    double sum = 0;
    double p10 = 1;
    for(int i = ans.length()-1 ;i>=0 ;i--){
        sum = sum + ((int)ans[i])*p10;
        p10 = p10 *10;
    }
    return sum;
}

int main(){
    string s = "iiii";
    string ans = "";
    int k = 1;
    for( char ch : s){
        int n = (int)(ch - 'a' + 1);
        ans = ans + to_string(n);
    }
    double itans = 0;
    itans = sttoint(ans);


    while(k--){
        itans = convert(itans);
    }
    cout<< (int)itans;
    

}