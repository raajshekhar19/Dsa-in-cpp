#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &arr,int target){
    int n = arr.size();
    int m = arr[0].size();
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            if(arr[i][j]==target){
                return true;
            }
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    searchMatrix(matrix, 8) == true ? cout << "true\n" : cout << "false\n";
}