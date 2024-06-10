#include<bits/stdc++.h> 
using namespace std;



int pivotfinder(int &arr,int low , int high){
           int pivot = low;
           int i =low;
           int j = high;
           while(i<j){
            while(arr[i]<=arr[pivot] && i<=high-1){
                i++;
            }
            while(arr[j]>arr[pivot] && j>=low+1){
                j--;
            }
            if(i<j){
                swap(arr[i],arr[j]);
            }
            swap(arr[pivot],arr[j]);
            return j;
           }


}

void quicksort(int &arr, int low , int high){

    if(low< high){
        int pidx = pivotfinder(arr, low,high);
        quicksort(arr,low,pidx-1);
        quicksort(arr,pidx+1,high);
    }
}


int main(){
    vector<int> arr = {1,2,3,4,5};
    int  n = arr.size();
    quicksort(arr, 0,n-1);
    for(int i =0 ;i<n ; i++){
        cout<<arr[i]<<" ";
    }

}