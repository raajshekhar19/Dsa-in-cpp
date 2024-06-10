#include<bits/stdc++.h>
using namespace std;


//tc -> O(n*M)
int main(){
    vector <int> arr1 = {1,1,2,3,3,4,5};
    int n = arr1.size();
    vector<int> arr2 = {2,3,3,4,5,6};
    int m = arr2.size();
    vector<int> uni;
    vector<int> used(arr2.size());

    for(int i = 0 ; i<n ; i++){
        for(int j = 0; j<m;j++){
            if(arr1[i]==arr2[j] && used[j]!=1 ){
                uni.push_back(arr1[i]);
                used[j]=1;
                break;
            }
            else if(arr2[j]>arr1[i]){
                break;
            }
        }

    }

    for(int i = 0 ;i<uni.size() ;i++){
        cout<<uni[i]<<" ";
    }

    

}