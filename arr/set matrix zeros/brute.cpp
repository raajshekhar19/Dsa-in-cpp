#include<bits/stdc++.h>
using namespace std;

void markrow( vector<vector<int>> &matrix,int n,int m, int i){
    //replaces the zeros with -1 in rows
    for(int j = 0;j<m;j++){
        if(matrix[i][j]!=0){
            matrix[i][j]=-1;
        }
    }
}

void markcol(vector<vector<int>> &matrix,int n,int m,int j){
    //replaces the zeros with -1 in column
    for(int i =0;i<n;i++){
        if(matrix[i][j]!=0){
            matrix[i][j]=-1;
        }
    }
}


vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m){
        //identify zeros
    for(int i = 0 ; i<n ;i++){
        for(int j = 0 ;j<m ;j++){
            if(matrix[i][j]==0){
                markrow(matrix,n,m,i);
                markcol(matrix,n,m,j);
            }
        }
    }
   //replace the -1 with the 0
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == -1) {
                matrix[i][j] = 0;
            }
        }
    }

    return matrix;
}

int main(){
    vector<vector<int>> matrix ={{1,1,1},
                                {1,0,1},
                                {1,1,1}};
    int n = matrix.size();
    int m = matrix[0].size();

    vector<vector<int>> ans = zeroMatrix(matrix, n, m);
    for(int i = 0;i<n;i++){
        for(int j =0;j<m;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
                  
}