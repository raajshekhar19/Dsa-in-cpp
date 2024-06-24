#include<bits/stdc++.h>
using namespace std;

//optimal
/* row wise matrix sorted h
first col se min nikalo
last col se max
unks mid nikalo
agar us mid element k upperbound req that is half hait to ans
else agr req se kam h low = mid + 1
else high = mid - 1 */


int upperBound(vector<int>&arr, int x, int C){
        int low = 0;
        int high = C -1;
        int ans = C;
        while(low<=high){
            int mid = (low +high)/2;
            if(arr[mid]>x){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }





    int countSmallEqual(vector<vector<int>> &matrix, int R, int C,int x){
        int count = 0;
        for(int i =0;i<R ;i++){
            count +=upperBound(matrix[i],x,C);
        }
        return count;
    }



    int median(vector<vector<int>> &matrix, int R, int C){
        // code here          
        int low = INT_MAX;
        int high = INT_MIN;
        for(int i = 0;i<R;i++){
            low = min(low,matrix[i][0]);
            high = max(high,matrix[i][R-1]);
        }
        int req = (R * C)/2;
        while(low<=high){
            int mid = low + (high - low)/2;
            int smallEqual = countSmallEqual(matrix,R,C,mid);
            if(smallEqual<=req){
                low = mid +1;
            }
            else{
                high = mid -1;
            }
        }
        return low;