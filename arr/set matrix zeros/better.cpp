#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> zeromatrix(vector<vector<int>> &matrix, int n , int m){
    int col[m]={0};
    int row[n]={0};
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(matrix[i][j]==0){
                row[i]=1;
                col[j]=1;
            }
        }
    }

    for(int i = 0 ; i <n ;i++){
        for(int j = 0;j<m;j++){
            if(row[i] ||col[j]){
                matrix[i][j] =0;
            }
        }
    }
    return matrix;
}

//tc -> 2*O(n^2)
//sc->O(2n )


int main(){
    vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};
     zeromatrix(matrix,3,3);
     for(int i =0 ;i<3;i++){
        for(int j = 0;j<3;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
     }
}