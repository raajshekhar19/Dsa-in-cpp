#include<bits/stdc++.h>
using namespace std;

long long tonumber(string s){
    int long long res =0;
    for(int i =0;i<s.length();i++){
        res+=(s[i]-'A'+1)*pow(26,s.length()-i-1);
    }
    return res;
}

vector<string> sortItems(int n, vector<string> &items) {

    vector<pair<long long, string>> hsh;
    for(int i =0;i<n;i++){
        hsh.push_back({tonumber(items[i]),items[i]});
    }
    sort(hsh.begin(),hsh.end());
    vector<string> ans;
    for(auto it : hsh){
        ans.push_back(it.second);
    }
return ans;
}