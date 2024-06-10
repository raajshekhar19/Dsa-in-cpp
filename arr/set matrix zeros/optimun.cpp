#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> zeromatrix(vector<vector<int>> &matrix, int n , int m){
    //identify and set the zeros to the left
    //set the top right row 
    //the one cell is common take that as sepaerate

    /* int col0=0;
    for(int i = 0 ; i<n ;i++){
        for(int j =0;j<m;j++){
            if(matrix[i][j]==0){
                //row to 0
                matrix[i][0]=0;
                //col to 0 except j
                if(j!=0){
                    matrix[0][j]=0;
                }
                else{
                    col0=0;
                }
            }
        }
    }

    for(int i =1;i<n ;i++){
        for(int j=1;j<m;j++){
            if(matrix[i][0]==0 || matrix[0][j]==0){
                matrix[i][j]=0;
            }
        }
    }

     if(matrix[0][0]==0){
        for(int j = 0; j<m;j++){
            matrix[0][j]=0;
        }
       }
       //right col m putting zeros
       if(col0==0){
        for(int i =0;i<n;i++){
            matrix[i][0]=0;
        }
       }
    return matrix; */
    int col0 = 1;
       for(int i = 0;i<n;i++){
        for(int j =0;j<m;j++){
            if(matrix[i][j]==0){
                //mark the row
                matrix[i][0]=0;
                //markm the col
                if(j!=0){
                    matrix[0][j]=0;
                }
                else{
                    col0=0;
                }
            }
        }
       }

       //now putting zeros in core
       for(int i = 1;i<n;i++){
        for(int j =1;j<m;j++){
            if(matrix[i][j]!=0){
                if(matrix[i][0] == 0 || matrix[0][j]==0){
                matrix[i][j]=0;
            }
            }
        }
       }
       //putting zeromon right column and right row
       //right row m putting zeros;
       if(matrix[0][0]==0){
        for(int j = 0; j<m;j++){
            matrix[0][j]=0;
        }
       }
       //right col m putting zeros
       if(col0==0){
        for(int i =0;i<n;i++){
            matrix[i][0]=0;
        }
       }
}

//tc -> 
//sc->O(


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