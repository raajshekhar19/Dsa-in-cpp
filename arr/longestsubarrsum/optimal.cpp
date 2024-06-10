#include<bits/stdc++.h>
using namespace std;

int longestsubarrsum(vector<int>&arr, int n){
    //map ->no /idx
    //psum ->check mp
    //longeest =0;
    map<int,int> mpp;
    int largest = 0;
    int psum=0;
    for(int i =0;i<n;i++){
        psum+=arr[i];
        if(psum==0){
            largest= i+1;
        }
        else{
            if(mpp.find(psum)!=mpp.end()){
            int curr = i-mpp[psum];
            largest=max(largest,curr);
            }
            else{
            mpp[psum]=i;
            }

        }
        
    }
    return largest;
}

//time complexity - >O(n*logn) n for traversal 
//and logn for the map

//space complexity ->O(N)

int main(){
    vector<int> arr = {1,-1,3,2,-2,-8,1,7,10,23};
    int n = arr.size();
    cout<<longestsubarrsum(arr,n);

}