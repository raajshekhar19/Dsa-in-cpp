#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "testsample";
    int length = str.length();
    map<char,int> mpp;
    for(int i =0;i<length;i++){
        mpp[str[i]]++;
    }
    int largest = -1;
    for(auto it : mpp){
        if(it.second>largest){
            largest=it.second;
        }
    }
    
}