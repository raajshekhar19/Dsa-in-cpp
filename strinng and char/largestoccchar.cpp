#include<bits/stdc++.h>
using namespace std;


char maxelement(string s){
    int arr[26]={0};
    for(int i =0;i<s.length();i++){
        char ch = s[i];
        //lowercase
        if(ch>='a' && ch<='s'){
            int n =ch - 'a' ;
            arr[n]++;
        }
        else{
            int n =ch-'A' ;
            arr[n]++;
        }
    }

    int maxi = 0;
    int ans = 0;
    for(int i = 0;i<26;i++){
        if(arr[i]>maxi){
            maxi= arr[i];
            ans = i;
        }
    }

    return (char)(ans + 'a');
}

int main(){
    string str = "testsample";
    int length = str.length();
    cout<<maxelement(str);
    
}