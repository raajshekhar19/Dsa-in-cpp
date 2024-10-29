#include<bits/stdc++.h>
using namespace std;


vector<int>nge(vector<int>qn){
    stack<int>st;
    vector<int>ans;
    for(int i = qn.size()-1;i>=0;i--){
        if(st.top()<qn[i]){
            ans.push_back(st.top());
        }
        else{
            while(st.top()>=qn[i]){
                st.pop();
            }
            ans.push_back(st.top());
        }
        st.push_back(arr[i]);
    }
    return ans;
}