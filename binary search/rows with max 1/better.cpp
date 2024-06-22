#include<bits/stdc++.h>
using namespace std;

int lowerbound(vector<int> &arr, int m){
    int low =0,high = m-1;
    while(low<=high){
        int mid = low + (high -low)/2;
        if(arr[mid]==1){
            high = mid -1;
        }
        else{
            low = mid +1;
        }
    }
    return low;
}


int rowWithMax1s(vector<vector<int>> &arr, int n, int m){
    int maxone = 0;
    int maxoneidx =-1;
    for(int i = 0 ; i < n ; i++){
         int counter = m - lowerbound(arr[i],m);
         if(counter>maxone){
            maxone= counter;
            maxoneidx=i;
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