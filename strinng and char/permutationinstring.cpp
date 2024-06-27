#include<bits/stdc++.h>
using namespace std;

bool check(vector<int> &counter1,vector<int> &counter2){
    for(int i =0; i<26 ;i++){
        if(counter1[i]!=counter2[i]){
            return false;
        }
    }
    return true;
}

bool permutation(string s1, string s2){
    vector<int> counter1(26,0);


    //charcter count array
    for(int i =0;i<s1.length();i++){
        int idx= s1[i] - 'a';
        counter1[idx]++;
    }


    // traversing thw s2 string in window of size s1
    int i =0;
    int windowSize = s1.length();
    vector<int> counter2(26,0);

    //runnning for first window
    while(i< windowSize){
        int idx = s2[i] - 'a';
        counter2[idx]++;
        i++;
    }
    if(check(counter1,counter2)){
        return true;
    }
    //proceed the window
    //kiuki window ek hi size se badhta h to bech k eements 
    //common hote h to unkse koi dikkat nhi 
    //but jo left most element h usko htna hoga  

        while(i<s2.length()){
            char newChar = s2[i];
            int idx = newChar - 'a';
            counter2[idx]++;

            char oldChar = s2[i - windowSize];
            idx = oldChar-'a';
            counter2[idx]--;
            i++;
            
            if(check(counter1,counter2)){
                return true;
            }
    }
       return false;
   }

int main(){
cout<<permutation("ab","eidbaooo");
}