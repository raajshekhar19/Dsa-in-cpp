#include<bits/stdc++.h>
using namespace std;

bool ispar(string s)
    {
        // Your code here
        stack<char> st;
        for(int i =0;i<s.length();i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{'){
                st.push(s[i]);
            }
            else if(s[i]==')'){
                if(st.size()>0){
                    if(st.top()=='('){
                    st.pop();
                }
                else{
                    return false;
                }
                }else{
                    return false;
                }
                
            }
            else if(s[i]==']'){
                if(st.size()>0){
                    if(st.top()=='['){
                    st.pop();
                }
                else{
                    return false;
                }
                }
                else return false;
            }
            else if(s[i]=='}'){
                if(st.size()>0){
                    if(st.top()=='{'){
                    st.pop();
                }
                else{
                    return false;
                }
                }
                else return false;
            }
        }
        return st.empty();
    }