#include<bits/stdc++.h>
using namespace std;

vector<string> sortitems(int n , vector<string>&items){
    map<int,multiset<string>> hsh;
    for(auto it: items){
        int size = it.size();
        hsh[size].insert(it);
    }
    vector<string> ans;
    for(auto it: hsh){
        for(auto i :it.second){
            ans.push_back(i);
        }
    }
    return ans;
}

int main(){
    

}