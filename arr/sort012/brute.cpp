#include<bits/stdc++.h>
using namespace std;

//timr complexity - >  O(NlogN)
//space complexity - > O(1)

int main(){
    vector<int> arr ={0,2,1,0,1,2,1,2,0,0,0,1};
    int  n = arr.size();
    sort(arr.begin(),arr.end());
    for(int i = 0 ; i <arr.size();i++){
        cout<<arr[i]<< " ";
    }
}