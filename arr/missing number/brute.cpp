#include<bits/stdc++.h>
using namespace std;

int main(){
     vector<int> arr = {0,4,2,1};
     int n =  4;
     int flag;

     for(int i = 0; i <=n ; i++){
         bool found = false;
        for(int j= 0; j<arr.size();j++){
            if(arr[j]==i){
                found = true;
                break;
            }
            
        }
        if (!found) {
            flag = i; // Update flag if the number is not found
            break;
        }

     }
     cout<<flag;

    
}