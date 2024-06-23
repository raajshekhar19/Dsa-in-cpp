#include<bits/stdc++.h>
using namespace std;

int largest(vector<vector<int>> &matrix, int n , int m , int col){
    int maxelem = INT_MIN;
    int idx = -1;
    for(int i =0;i<n;i++){
        if(matrix[i][col]>maxelem){
            maxelem=matrix[i][col];
            idx = i;
        }
    }
    return idx;
}


vector<int> peakelement(vector<vector<int>> &matrix){
    int n = matrix.size();
    int m = matrix[0].size();
    int low = 0;
    int high = m-1;
    while(low<=high){
        int mid = low + (high - low)/2;
        int largestnumidx = largest(matrix,n,m,mid);
        int left = (mid - 1)>=0?matrix[largestnumidx][mid-1]:-1;
        int right = (mid + 1)>m?matrix[largestnumidx][mid+1]:-1;
        if(matrix[largestnumidx][mid]>left && matrix[largestnumidx][mid]>right){
            return {largestnumidx,mid};
        }

        else if(matrix[largestnumidx][mid]<left){
            high = mid -1;
        }
        else{
            low = mid +1;
        }

    }
    return {-1,-1};
}




int main(){
    vector<vector<int>>matrix = {{10,20,15},{21,30,14},{7,16,32}};
    peakelement(matrix);
    
}