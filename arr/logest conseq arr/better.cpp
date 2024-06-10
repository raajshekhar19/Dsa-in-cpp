#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {100, 200, 1, 2, 3, 4};
    int n = arr.size();
    int longest =1;
    int count = 0;
    //sort
    //initialize lastsmallest as INT_MIN
    //iterate 
    //if the last smallest is one less than currrent 
    //counter ++;
    //and laastsmallest equal to arr[i]
    //if the arr[i]== lastsum do nothing
    //if the arr[i]!=lastsum lastsum = arr[i]
    sort(arr.begin(),arr.end());
    int lastsmallest = INT_MIN;
    for(int i =0 ;i<n;i++){
        if(arr[i]-1==lastsmallest){
            count++;
            lastsmallest=arr[i];
        }
        else if(arr[i]!=lastsmallest){
            count =1;
            lastsmallest=arr[i];
        }
        longest=max(longest,count);
    }
    cout<<longest;
}