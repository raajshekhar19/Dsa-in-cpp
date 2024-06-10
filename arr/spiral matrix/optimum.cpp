#include<bits/stdc++.h>
using namespace std;
void spiralmatrix(vector<vector<int>> &matrix, int n, int m){
    int top =0;
    int right = m-1;
    int bottom =n-1;
    int left =0;
    vector<int> ans;

    while(top<=bottom  && left<=right){

        //for moving left to right
        for(int i = left;i<=right;i++){
                ans.push_back(matrix[top][i]);
        }
        top++;

        //printing down
        for(int i = top;i<=bottom;i++){
            ans.push_back(matrix[i][right]);
        }
        right--;
        
        //for moving right to left
        //since to ignore the test case of the single row 
        //bcoz if the single row is then the pointer shifts to the second row
        //but at the second row there is no element thus is is a problem

        if(top<=bottom){
            for(int i = right;i>=left;i--){
            ans.push_back(matrix[bottom][i]);
        }
        bottom--;
        }

        //for bottom to top
        //for the single column then then right shift to left 
        //but ther is nothing at the left thus an anomalus case
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                ans.push_back(matrix[i][left]);
            }
            left++;
        }


    }
    for(int i =0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }


}




int main(){
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
     spiralmatrix(matrix,3,3);
     
}