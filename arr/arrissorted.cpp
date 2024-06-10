#include<iostream>
using namespace std;

bool checker(int arr[], int n){
    for(int i = 1; i< n;i++){
        if(arr[i]>=arr[i-1]){
            continue;
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){

    int arr[5]={1,2,3,5,4};
    int n = 5;
    int isarrSorted = checker(arr, n);
    cout<<isarrSorted<<endl;
}