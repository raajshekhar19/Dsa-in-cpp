#include<bits/stdc++.h>
using namespace std;

//O(n^3)

class Solution {
public:
    int findTheLongestSubstring(string s) {
        int maxlen = 0;
        for(int i =0;i<s.length();i++){
            for(int j = i;j<s.length();j++){
                vector<int>fcheck(26,0);
                for(int k = i;k<=j;k++){
                    if(s[k]=='e'||s[k]=='a'||s[k]=='i'||s[k]=='o'||s[k]=='u'){
                        int it = int(s[k]) - 'a';
                       fcheck[it]++; 
                    }
                }
                int checker = 1;
                for(int i = 0;i<fcheck.size();i++){
                    if(fcheck[i]%2!=0){
                        checker = 0;
                        break;
                    }
                }
                if(checker == 1){
                    int sizer = j-i+1;
                    if(sizer>maxlen){
                        maxlen = sizer;
                    }
                }
            }
        }
        return maxlen;
    }
};