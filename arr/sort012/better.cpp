#include<bits/stdc++.h>
using namespace std;

//time complexity-> O(2n)
//space complexity - >O(1) 


int main(){
    vector<int> arr ={0,2,1,0,1,2,1,2,0,0,0,1};
    int  n = arr.size();
    //counter to count the no of zero 1 and 2
    int count0=0;
    int count1 = 0;
    int count2 = 0;
    for(int i = 0 ; i<n; i ++){
        if(arr[i]==0){
            count0++;
        }
        else if(arr[i]==1){
            count1++;
        }
        else if(arr[i]==2){
            count2++;
        }
    }
    //make loops and make them iterate till the counter and replace the elements with the number
    for(int i = 0 ; i <count0; i++){
        arr[i]=0;
    }
    for(int i= count0; i<count0+count1 ; i++){
        arr[i]=1;
    }
    for(int i = count0+count1;i<n;i++){
        arr[i]=2;
    }
    for(int i = 0 ; i  <n ;i++){
        cout<<arr[i]<<" ";
    }
}