#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr1,int n, vector<int> &arr2, int m){
    int left = n-1;
    int right = 0;
    while(left>= 0 && right<m){
        if(arr1[left]>=arr2[right]){
            swap(arr1[left],arr2[right]);
            left--;
            right++;
        }
        else{
            break;
        } 
    }
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
}

//timecomplexity -> O(min(m,n))+O(nlogn)+O(mlogm)
//space -> O(1)

int main(){
    vector<int> arr1 ={};
    vector<int> arr2 ={};

}