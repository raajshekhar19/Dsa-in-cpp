#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<int> arr = {7,5,4,3,2,1};
    int n = arr.size();
    //take the first elem.
    //tkae its profit from the rest elem
    // max the profit 
    //take the min of arr elem
    int buy =arr[0];
    int profit =0;
    for(int i = 0; i< n ;i++){
        int diff =arr[i]-buy;
        profit = max(profit,diff);
        buy=min(buy,arr[i]);
    }
    cout<<profit;
}