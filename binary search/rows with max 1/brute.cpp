#include<bits/stdc++.h>
using namespace std;

int rowWithMax1s(vector<vector<int>>&arr, int n, int m){
    int maxone = -1;
    int maxoneidx =-1;
    for(int i =0;i<n;i++){
        int counter =0;
        for(int j =0;j<m;j++){
            if(arr[i][j]==1){
                counter++;
            }
        }
        if(counter>maxone && counter!=0){
            maxone = counter;
            maxoneidx = i;
        }
    }
    return maxoneidx;
}
int main()
{
    vector<vector<int>> matrix = {{1, 1, 1}, {0, 0, 1}, {0, 0, 0}};
    int n = 3, m = 3;
    cout << "The row with maximum no. of 1's is: " << rowWithMax1s(matrix, n, m) << '\n';
}