#include<bits/stdc++.h>
using namespace std;

int rotateleftd(vector<int> &arr, int n , int d){
    //push the d elements to temp arr
    d = d%n;
    int temp[d];
    for(int i = 0 ; i<d;i++){
        temp[i]=arr[i];
    }

    //shift the remaining elements to left
    for(int i = d;i<n;i++){
        arr[i-d]= arr[i];
    }

    //push back the temp arr to main arr
    for(int i = n-d ; i<n ;i++){
        arr[i]= temp[i-(n-d)];
    }

}
//time complexity is O(d) + O(n-d) + O(d) = O(n+d)
//space complexity is O(d)

int main(){

    vector<int> arr={1,2,3,4,5};
    int size =5;
    int rotate = 2;
    rotateleftd(arr,size,rotate);
    for(int i = 0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }
}