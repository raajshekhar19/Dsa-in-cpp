#include<bits/stdc++.h>
using namespace std;



 vector<vector<int>> construct2DArray(vector<int>& original, int m, int n){
    int size1 = original.size();
    int size2 = m*n;
    if(size1!=size2){
        return {};
    }
    vector<vector<int>>ans(m,vector<int>(n));
    int idx =0;
    for( int i =0;i<m;i++){
        for( int j =0;j<m;j++){
            ans[i][j]=original[idx];
            idx++;
        }
    }
 }


int main(){

}