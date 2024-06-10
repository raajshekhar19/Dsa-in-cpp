#include<bits/stdc++.h>
using namespace std;

void mergearr(vector<int> &arr1,int n,vector<int> &arr2,int m){
        vector<int> ans = {};
        int i =0;
        int j =0;
        int idx =0;
        while(i<n && j<m){
            if(arr1[i]<=arr2[j]){
                   ans.push_back(arr1[i]);
                   i++;
            }
            else{
                ans.push_back(arr2[j]);
                j++;
            }
        }
        while(i<n){
            ans.push_back(arr1[i]);
            i++;
        }
        while(j<m){
            ans.push_back(arr2[j]);
            j++;
        }
        for(int i =0;i<n;i++){
            arr1[i]=ans[i];
        }
        for(int j = 0;j<m;j++){
            arr2[j]=ans[n+j];
        }
}

//time complexity -> O(n+m)+O(n+m)
//sspace complexity -> O(n+m)


int main(){
    vector<int> arr1 = {};
    int n = arr1.size();
    vector<int> arr2 = {};
    int m = arr2.size();
}