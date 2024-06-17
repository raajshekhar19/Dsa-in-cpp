#include<bits/stdc++.h>
using namespace std;

/* 
The simple idea is to converts each identifier to its numeric equivalent 
by multiplying each letter’s value by 26 raised to the power of its position 
from the right (0-indexed). This conversion allows us to compare identifiers numerically. */



vector<string> sortitems(int n , vector<string>&items){
    //ek multiset ka use karo
        //us multiset m size ke arrording wo arrange hio jayega 
        //aur lexographically bhi
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