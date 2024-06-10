#include<bits/stdc++.h>
using namespace std;

int longsubarr(vector<int>&a, long long k ){
    map<long long,int> presum;
    long long sum =0;
    int maxlen =0;
    for(int i =0;i<a.size();i++){
        //sum karna h
        // check karna h ki wo equal h target k
        //agar h to usk alength compare karna h
        //long long rem
        //ye rem h equal to sum - target
        //check if its index exists
        //if yes compare  its len.
        //add it to psum arr;
        sum +=a[i];
        if(sum == k){
            maxlen=max(maxlen,i+1);
        }
        long long rem = sum - k;
        if(presum.find(rem) != presum.end()){
            int len = i - presum[rem];
            maxlen=max(maxlen,len);
        }
        presum[sum]=i;
    }
    return maxlen;
}

int main(){
    vector<int> a = {1,2,3,1,1,1};
    int k = 3;

    cout<<longsubarr(a,k);

}