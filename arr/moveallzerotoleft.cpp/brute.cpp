#include<bits/stdc++.h>
using namespace std;


//time compelexity -> 
int main(){
    vector<int> arr= {1,0,2,3,2,0,0,4,5,1};
    //move non zero elements to arr
    vector<int> temp; 
    for(int i = 0 ; i<arr.size();i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }
    //replacing back the elements]
    if(temp.size()!=arr.size()){
        for(int i = 0 ; i<arr.size();i++){
        if(i<temp.size()){
            arr[i]=temp[i];
        }
        else{
            arr[i]=0;
        }
        
    }

    for(int  i = 0 ; i <arr.size();i++){
        cout<<arr[i]<<" ";
    }
    }
}