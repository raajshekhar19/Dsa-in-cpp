
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> rotatematrix(vector<vector<int>> &matrix, int n, int m)
{
    vector<vector<int>> mod;
    for(int i = 0 ; i<n ;i++){
        for(int j =0;j<m;j++){
            mod[j][n-1-i]=matrix[i][j];
        }
    }
    
        return mod;

}

int main(){
    vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};
     rotatematrix(matrix,3,3);
     for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
                cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
     }
     
     }
