#include<bits/stdc++.h>
using namespace std;

int convert(long long q){
    long long sum = 0;
    while(q){
        int rem = q%10;
        sum = sum + rem;
        q = q/10;
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
    long long itans = stoll(ans); 
    while(k--){
        itans = convert(itans);
    }
    cout<< (int)itans;
    

}