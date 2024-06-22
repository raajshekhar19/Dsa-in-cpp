#include<bits/stdc++.h>
using namespace std;

bool bs(vector<int>& matrix, int target){
    int low = 0;
    int n = matrix.size();
    int high = n-1;
    while(low<=high){
        int mid = low + (high -low)/2;
            if(matrix[mid]==target){
                return true;
            }
            else if(target>matrix[mid]){
                low = mid +1;
            }
            else{
                high = mid -1;
            }
    }
    return false;
}


bool searchMatrix(vector<vector<int>> &matrix, int target){

    int n = matrix.size();
    int m = matrix[0].size();
    for(int i =0;i<n;i++){
        if(matrix[i][0]<=target && target<=matrix[i][m-1]){
            return bs(matrix[i],target);
        }
    }
    return false;
}


int main()
{
    vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    searchMatrix(matrix, 8) == true ? cout << "true\n" : cout << "false\n";
}