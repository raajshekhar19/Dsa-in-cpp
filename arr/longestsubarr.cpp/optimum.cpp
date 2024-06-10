#include<bits/stdc++.h>
using namespace std;

//time complex-> O(2n)
//space -> O(1)

int longsubarr(vector<int> a, int k){
    int left = 0;
    int right = 0;
    long long sum = a[0];
    int maxlen = 0;
    int n = a.size();
    // initialize two pointers on 0
    //the pointer movers right
    //if the sum equls the target the len is taken
    //if the sum is greater than the targret the left 
    //pointer starts deducting till  
    while(right < n){
        while(sum>k && left<=right){
            sum-=a[left];
            left++;
        }
        if(sum==k){
            maxlen = max(maxlen,right-left +1);
        }
        right++;
         if(right<n)sum+=a[right];
    }

return maxlen;
}

int main(){
    vector<int> arr  ={1,2,3,1,1,1};
    int k = 3;
   int l = longsubarr(arr,k);
   cout<<l;
}