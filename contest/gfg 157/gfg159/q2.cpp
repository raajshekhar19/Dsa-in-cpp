/* 
The problem requires constructing a "bridge" between the binary representations 
of all numbers in the array arr. A bridge between two numbers is defined as having 
at least one common bit set to 1 in the same position across all numbers. The task is to determine the 
minimum number of bit-flipping operations needed to achieve this. */

#include<bits/stdc++.h>
using namespace std;

int makeBridgeOne(int n, vector<long long> &arr) {
    //check each bit in whole arr one by one
    //the number of zeros is the number of the repalcements
    int ans = INT_MAX;
    for(int i=0 ;i<64 ;i++){
        int counter=0;
        for(int j = 0;j<arr.size();j++){
            if((arr[j]&(1L<<i))==0){
                    counter++;
            }
        }
        ans = min(ans,counter);

    }
    return ans;

}
int main(){
    vector<long long> arr = {1,2,3,4,5};
    int n = arr.size();
    cout<<makeBridgeOne(n,arr);
}