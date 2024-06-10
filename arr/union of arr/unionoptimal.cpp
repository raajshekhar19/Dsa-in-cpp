#include<bits/stdc++.h>
using namespace std;

//time complexity ->O(n1+n2)
//space complexity ->O(n1+n2)

int main(){
    vector <int> arr1 = {1,1,2,3,4,5};
    vector<int> arr2 = {2,3,4,5,6};
    vector<int> uni;
     
    int i = 0 ;
    int j = 0;
    while (i < arr1.size() && j < arr2.size()){
        
                if(arr1[i]<=arr2[j]){
                    if(uni.empty() ||uni.back()!=arr1[i]){
                        uni.push_back(arr1[i]);
                    }
                    i++;
                }
                else{
                    if(uni.empty() ||uni.back()!=arr2[j]){
                        uni.push_back(arr2[j]);
                    }
                    j++;
                }
    }

     // Add remaining elements from arr1
    while (i < arr1.size()) {
        if (uni.empty() || uni.back() != arr1[i]) {
            uni.push_back(arr1[i]);
        }
        i++;
    }
    
    // Add remaining elements from arr2
    while (j < arr2.size()) {
        if (uni.empty() || uni.back() != arr2[j]) {
            uni.push_back(arr2[j]);
        }
        j++;
    }

    for(int o = 0 ; o<uni.size(); o++){
        cout<<uni[o]<<" ";
    }
    
}