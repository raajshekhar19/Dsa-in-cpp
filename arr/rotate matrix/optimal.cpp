#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> rotatematrix(vector<vector<int>> &matrix, int n, int m){
    //transpose the matrix 
    for(int i =0;i<n;i++){
        for(int j =0;j<i;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
     //reverse the rows
     for(int i =0;i<n;i++){
        reverse(matrix[i].begin(),matrix[i].end());
     }
     return matrix;
    
}

int main(){
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
     rotatematrix(matrix,3,3);
     for(int i =0 ;i<3;i++){
        for(int j =0;j<3;j++){
                cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
         }     
     }