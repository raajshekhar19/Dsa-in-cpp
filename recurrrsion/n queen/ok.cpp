#include<bits/stdc++.h>
using namespace std;


    bool isPossible(int row, int col, vector<string>&board, int n){
        //topdiag
        int r= row;
        int c = col;
        while(r>=0 && c>=0){
            if(board[r][c]=='Q') return false;
            c--;
            r--;
        }
        //midrow
        r = row;
        c = col;
        while(c>=0){
            if(board[r][c]=='Q') return false;
            c--;
        }
        //lowrow
        r = row;
        c = col;
        while(r<n && c>=0){
            if(board[r][c]=='Q')return false;
            r++;
            c--;
        }
        return true;
    }



    void solve(int col, vector<string>& board,vector<vector<string>>& ans,int n){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for( int row = 0 ;row<n;row++){
            if(isPossible(row,col,board,n)){
                board[row][col]='Q';
                solve(col+1,board,ans,n);
                board[row][col]='.';
            }
        }
    }




    vector<vector<string>> solveNQueens(int n) {
        //your code goes here
        vector<vector<string>>ans;
        vector<string>board(n);
        string s (n,'.');
        for( int i = 0 ; i < n ; i++){
            board[i] = s;
        }
        solve(0,board,ans,n);
        return ans;
    }

    int main(){

    }