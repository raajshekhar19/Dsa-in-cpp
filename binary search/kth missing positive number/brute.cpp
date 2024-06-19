#include<bits/stdc++.h>
using namespace std;

//time complex ->O(2n)
//space -> O(maxelem+1)

int main(){
    vector<int> arr ={2,3,4,7,11};
    int m = *max_element(arr.begin(),arr.end());
    int n = arr.size();
    int k = 5;
    //hash->maxelem-0
    // iterate mil 0->1
    //iterate 0->counter++
    //check if counter ==k return i
    vector<int> hsh(m+1,0);
    for(int i =0;i<n;i++){
        hsh[arr[i]]=1;
    }
    int counter=0;
    for(int i =1;i<=m;i++){
        if(hsh[i]==0){
            counter++;
        }
        if(counter==k){
             cout<<i;
             break;
        }
    }
    //edge case when missing number is not within the max ele
    if(counter<k){
        return (arr[n-1] + k -counter);
    }
    return 0;

}