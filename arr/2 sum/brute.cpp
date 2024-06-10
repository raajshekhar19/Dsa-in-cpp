#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {2,6,8,11,5};
    int target = 14;
    for(int i = 0 ; i < arr.size();i++){
        for(int j = i+1 ; j <arr.size(); j++){
            if(arr[i]+arr[j]==target){
                cout<<i<<" "<<j;
                break;
            }
        }
    }
}
