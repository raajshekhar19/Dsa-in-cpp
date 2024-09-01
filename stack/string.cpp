#include<bits/stdc++.h>
using namespace std;

bool isValid(string s) {
        string ans = "";
        for(int i =0;i<s.length();i++){
            if(!ans.empty() && ans.back()==s[i]){
                ans.pop_back();
            }
            else{
                ans.push_back(s[i]);
            }
        }
        cout<<ans;
        return !ans.empty();
    }

int main(){
    cout<<isValid("()");
}