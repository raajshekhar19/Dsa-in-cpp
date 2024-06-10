//gap method
//shell sort


//add the no, of elements of each arr
//n+m  -> divideby 2 and take the ceil value 

#include<bits/stdc++.h>
using namespace std;
void swapelem(vector<int> &arr1, vector<int> &arr2, int idx1, int idx2){
    if(arr1[idx1]>arr2[idx2]){
        swap(arr1[idx1],arr2[idx2]);
    }
}

void merge(vector<int> &arr1,int n, vector<int> &arr2,int m){
    int length  = n+m;
    int gap =ceil((n+m)/2);
    while(gap>0){
        int left = 0;
        int right = left + gap;
        while(right<length){
            if(left<n && right>=n){
                //arr1 and arr2
                swapelem(arr1,arr2,left,right -n);
            }
            else if(left>=n){
                //arr2
                swapelem(arr2,arr2,left-n,right-n);
            }
            else{
                //arr1
                swapelem(arr1,arr1,left,right-n);
            }

        }
    }
}