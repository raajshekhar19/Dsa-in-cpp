#include<bits/stdc++.h>
using namespace std;
int largest(vector<int> &piles){
    int large = piles[0];
      for(int i=1;i<piles.size();i++){
        large=max(large,piles[i]);
      }
      return large;
}

int calctime(vector<int> &piles, int t){
    int n = piles.size();
    int hr = 0;
    for(int i =0;i<n;i++){
        hr +=ceil((double)piles[i]/t);
    }
    
    return hr;
}

int rate(vector<int> &piles, int h){
    int k = largest(piles);

    for(int i = 1;i<=k;i++){
        int reqtime = calctime(piles,i);
        if(reqtime<=h){
            return i;
        }
    }
    return -1;
    
}

//time complexity-> O(K*n)+O(n)
// k -> max(a[])
int main(){
    vector<int> piles = {7, 15, 6, 3};
    int h = 8;
    cout<<rate(piles,h);
}
//logic
/* 
find the max element 
k-> iterate from 1 to the max element 
divide each element with the k and donot forget to convert to double
add that all the entire array
if this is less than the h given return the ans
 */