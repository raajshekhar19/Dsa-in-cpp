#include<bits/stdc++.h>
using namespace std;



int main(){
    vector<int> arr ={4,1,2,1,2};
    int n = arr.size();
    int x=0;
    for(int i = 0 ; i <n ; i++){
        x =x^arr[i];
    }
    cout<<x;

}