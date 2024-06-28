#include<bits/stdc++.h>
using namespace std;

int lengthOfLastWord(string s) {
        int lastchar = -1;
        int lastcharspace  =-1;
        int n = s.size();

        for(int i = n-1 ;i>=0;i--){
            if(s[i]!=' '){
                lastchar = i;
                break;
            }
        }
        cout<<lastchar<<endl;
        for(int i = n-1 ;i>=0;i--){
            if(s[i]==' ' && i<lastchar){
                lastcharspace = i;
                break;
            }
            else{
                continue;
            }
        }
        cout<<lastcharspace<<endl;
        return (lastchar-lastcharspace);
    }

int main(){
    string s = "Hello World";
    cout<<lengthOfLastWord(s);
}