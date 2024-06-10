#include<bits/stdc++.h>
using namespace std;

//time complexity -> O(n1+n2)
//sc -> O(1)

int main(){
    vector <int> arr1 = {1,1,2,3,3,4,5};
    int n = arr1.size();
    vector<int> arr2 = {2,3,3,4,5,6};
    vector<int> uni;
    int m = arr2.size();
    int i = 0 ;
    int j = 0;
    while (i < arr1.size() && j < arr2.size()){
        if(arr1[i]==arr2[j]){
            uni.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i]>arr2[j]){
            j++;
        }
        else if(arr2[j]>arr1[i]){
            i++;
        }
    }

    for(int k = 0 ; k<uni.size();k++){
        cout<<uni[k]<<" ";
    }


}