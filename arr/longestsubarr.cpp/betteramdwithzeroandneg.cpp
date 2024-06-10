#include<bits/stdc++.h>
using namespace std;


int largestarr(vector<int> &arr, int k){
    map<long long,int> psum;
    long long sum = 0;
    int mlen = 0;
    for(int i = 0 ; i<arr.size();i++){
        sum +=arr[i];
        //sum karna h
        // check karna h ki wo equal h target k
        if(sum ==k){
            mlen =max(mlen,i+1);
        }
        //agar h to usk alength compare karna h
        //long long rem
        long long rem = sum -k;
        //ye rem h equal to sum - target
        if(psum.find(rem)!=psum.end()){
            int len = i - psum[rem];
            mlen = max(mlen , len);
        }

        //check if its index exists
        //if yes compare  its len.
        //add it to psum arr;
        //if sum equal to previous sum theen dont update
        if(psum.find(sum)==psum.end()){
            psum[sum]=i;
        }

    }
    return mlen;
}

int main(){
    vector<int> arr  ={1,2,3,1,1,1};
    int k = 3;
   int l = largestarr(arr,k);
   cout<<l;
}